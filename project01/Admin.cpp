#include "Admin.h"



Admin::Admin() {}


Admin::Admin(string id, string name, string pass)
{
	this->id = id;
	this->name = name;
	this->password = pass;
}

void Admin::manageGrades(string id)
{

	cout << "press Update if you need to update grade or press Add if you need to add a new grade";
	string n;
	cin >> n;
	cout << "enter course name:";
	string coursename;
	cin >> coursename;

	if (n == "Update")
		updateGrades(id, coursename);
	else if (n == "add grades")
		AddGrades(id, coursename);

}
void Admin::updateGrades(string studid, string coursename)
{
	map<string, tuple<float, float, float, char, int>>& grade = st.getstudent(studid).grades;
	float midterm = get<0>(grade[coursename]);
	float yearwork = get<1>(grade[coursename]);
	float final = get<2>(grade[coursename]);
	char letter; int points;
	string choice;
	cout << "what did you need to change midterm or yearwork ?";
	cin >> choice;
	if (choice == "Midterm")
	{
		cout << "the new midterm grade?";
		cin >> midterm;
	}
	else if (choice == "Yearwok")
	{
		cout << "the new yearwork grade?";;
		cin >> yearwork;
	}
	int total = final + midterm + yearwork;
	if (total >= 90) {
		letter = 'A+'; points = 4;
	}
	else if (total >= 80) {
		letter = 'B'; points = 3;
	}
	else if (total >= 70) {
		letter = 'C'; points = 2;
	}
	else if (total >= 60) {
		letter = 'D'; points = 1;
	}
	else {
		letter = 'F'; points = 0;
	}
	Student s = this->st.getstudent(studid);
	calculatGpa(s);
	grade[coursename] = make_tuple(midterm, yearwork, final, letter, points);

}
void Admin::AddGrades(string id, string coursename)
{
	Student& s = st.getstudent(id);
	for (auto it : s.registedcourses)
	{
		if (coursename == it)
		{
			cout << "What do you want to add?\n";
			cout << "1. Midterm\n";
			cout << "2. Yearwork\n";
			cout << "3. Final\n";
			cout << "4 LetterGrade\n";
			cout << "5. Points\n";
			cout << "6. All\n";
			int choice; cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "enter the midterm ";
				float midterm; cin >> midterm;
				get<0>(s.grades[it]) = midterm;
				break;
			case 2:
				cout << "enter the yearwork ";
				float yearwork; cin >> yearwork;
				get<1>(s.grades[it]) = yearwork;
				break;
			case 3:
				cout << "enter the final ";
				float final; cin >> final;
				get<2>(s.grades[it]) = final;
				break;

			case 4:
				cout << "enter the grade ";
				char grade; cin >> grade;
				get<3>(s.grades[it]) = grade;
				break;
			case 5:
				cout << "enter the points ";
				int points; cin >> points;
				get<4>(s.grades[it]) = points;
				break;
			case 6:
				cout << "enter the all the grade ";
				float year, mid, finall; int point; char letter; cin >> mid >> year >> finall >> letter >> point;
				s.grades[it] = make_tuple(mid, year, finall, letter, point);
				break;

			}

		}
	}
	calculatGpa(s);

}
void Admin::calculatGpa(Student& s)
{
	float pro = 0, sum = 0;

	for (auto it : s.grades)
	{
		Course co = course.getcourse(it.first);
		pro += (get<4>(it.second) * co.courseHours);
		sum += co.courseHours;
	}
	s.gpa = (pro / sum);
}

void Admin::waitlist(Student& student)
{
	Wlist.push_back(student);
	for (auto it : Wlist)
	{
		for (auto k : it.registedcourses)
			
			if (it.dropCourse(k) == true)
			{
				it.registedcourses.insert(k);
				if (!Wlist.empty())
					Wlist.pop_front();//then send message to this student that he registed this course and does not become on the waitlist anymore;
				else cout << "NO Waitlist for this Course: ";

			}
	}

}
void Admin::printCourses()
{
	for (auto& course : file.courses) {
		std::cout << "course code " << course.first << std::endl;
		course.second.print();
		cout << endl;
	}
}

void Admin::setprereq(Course& c) {
	string userinp;
	string pre;
	cout << "Enter the prerequisties for this course";
	cin >> pre;
	c.preReqisites.push_back(pre);
	cout << "do you want to continue?";
	cin >> userinp;
	if (userinp == "Yes" || userinp == "yes") {
		setprereq(c);
	}

}
void Admin::UpdateMaxSeats(Course& c)
{
	int newMaxSeats;
	cout << "Enter the new maximum number of seats: ";
	cin >> newMaxSeats;
	c.maxseets = newMaxSeats;
	cout << "Max seats for course \"" << c.courseTitle << "\" = " << newMaxSeats << endl;
}
void Admin::UpdateInstructor(Course& c)
{
	string newInstructor;
	cout << "Enter the new instructor name: ";
	getline(cin, newInstructor);
	c.instructor = newInstructor;
	cout << "Instructor for the course \"" << c.courseTitle << "\" is now \"" << newInstructor << "\"." << endl;
}
void Admin::Upload_Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string> preReqisites, int maxseets) {
	Course newCourse(courseCode, courseHours, courseTitle, instructor, preReqisites, maxseets);
	file.courses[newCourse.courseTitle] = newCourse;


}
void Admin::DeleteCourse(string courseTitle)
{

	string Input;
	for (char c : courseTitle) {
		if (!isspace(c))
			Input += tolower(c);
	}

	bool found = false;

	for (auto it = file.courses.begin(); it != file.courses.end(); ++it) {

		string Key;
		for (char c : it->first) {
			if (!isspace(c))
				Key += tolower(c);
		}

		if (Key == Input) {
			cout << "Course \"" << it->first << "\" has been deleted successfully." << endl;
			file.courses.erase(it);
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Course \"" << courseTitle << "\" was not found." << endl;
	}
}
void Admin::UpdatePrereq(Course& c) {
	string inp;
	cout << "do you want to add or remove?";
	cin >> inp;
	if (inp == "add") {
		setprereq(c);
	}
	else if (inp == "remove") {
		string title;
		cout << "what is the title of the course you want to remove from " + c.courseTitle + " prerequisties?";
		cin >> title;
		bool found = false;
		for (string pre : c.preReqisites) {
			if (pre == title) {
				found = true;
				c.preReqisites.remove(pre);
				cout << "the course is removed succesfully";
				break;
			}
		}
		if (!found)
			cout << "this course is not found in " + c.courseTitle + " prerequisties";
	}
}
Course& Admin::findCourse(string courseTitle)
{
	string normalizedInput;
	for (char c : courseTitle) {
		if (!isspace(c))
			normalizedInput += tolower(c);
	}

	for (auto& pair : file.courses) {
		string normalizedKey;
		for (char c : pair.first) {
			if (!isspace(c))
				normalizedKey += tolower(c);
		}

		if (normalizedKey == normalizedInput) {
			return pair.second;
		}
	}

	throw runtime_error("Course not found");
}