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

	/*if (n == "Update")
		updateGrades(id, coursename);*/
		//else if (n == "add grades")
			//AddGrades(id, coursename);

}
void Admin::updateGrades(Student& s, string coursename, int grade, int choice)
{
	unordered_map<string, tuple<float, float, float, string, int>>& grades = s.grades;
	float midterm = get<0>(grades[coursename]);
	float yearwork = get<1>(grades[coursename]);
	float final = get<2>(grades[coursename]);
	char letter; int points;

	if (choice == 1)
	{
		midterm = grade;
	}
	else if (choice == 2)
	{
		yearwork = grade;

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
	calculatGpa(s);
	grades[coursename] = make_tuple(midterm, yearwork, final, letter, points);

}
bool Admin::AddGrades(Student& s, string coursename, int grade, int choice, string g)
{
	bool found = false;
	for (auto it : s.registedcourses)
	{
		if (coursename == it)
		{
			found = true;
			switch (choice)
			{
			case 1:
				cout << "enter the midterm ";
				get<0>(s.grades[it]) = grade;
				break;
			case 2:
				cout << "enter the yearwork ";
				get<1>(s.grades[it]) = grade;
				break;
			case 3:
				cout << "enter the final ";
				get<2>(s.grades[it]) = grade;
				break;

			case 4:
				cout << "enter the grade ";
				get<3>(s.grades[it]) = g;
				break;
			case 5:
				cout << "enter the points ";
				int points; cin >> points;
				get<4>(s.grades[it]) = grade;
				break;
			}

		}
	}
	calculatGpa(s);
	return found;

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

//void Admin::waitlist(Student& student)
//{
//	Wlist.push_back(student);
//	for (auto it : Wlist)
//	{
//		for (auto k : it.registedcourses)
//
//			if (it.dropCourse(k) == true)
//			{
//				it.registedcourses.insert(k);
//				if (!Wlist.empty())
//					Wlist.pop_front();//then send message to this student that he registed this course and does not become on the waitlist anymore;
//				else cout << "NO Waitlist for this Course: ";
//
//			}
//	}
//
//}
void Admin::printCourses()
{
	for (auto& course : file.courses) {
		std::cout << "course code " << course.first << std::endl;
		course.second.print();
		cout << endl;
	}
}

void Admin::setprereq(Course& c, list<string>l) {
	for (auto pre : l) {
		c.preReqisites.push_back(pre);
	}
}
void Admin::UpdateMaxSeats(Course& c, int mxseat)
{
	c.maxseats = mxseat;
}
void Admin::UpdateInstructor(Course& c, string instname)
{

	c.instructor = instname;
}
void Admin::Upload_Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string> preReqisites, int maxseets) {
	Course newCourse(courseCode, courseHours, courseTitle, instructor, preReqisites, maxseets, 0);
	file.courses[newCourse.courseTitle] = newCourse;
}
bool Admin::DeleteCourse(string courseTitle)
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
			return true;
		}
	}

	if (!found) {
		cout << "Course \"" << courseTitle << "\" was not found." << endl;
		return false;
	}
}
bool Admin::UpdatePrereq(Course& c, string prereq, bool add) {
	if (add) {
		c.preReqisites.push_back(prereq);
		//setprereq(c);
	}
	else {

		bool found = false;
		for (string pre : c.preReqisites) {
			if (pre == prereq) {
				found = true;
				c.preReqisites.remove(pre);
				return true;

			}
		}
		if (!found) {
			return false;
		}

	}
}
