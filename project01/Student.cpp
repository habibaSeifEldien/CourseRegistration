#include "Student.h"
Student::Student() {}
Student::Student(string studentId, string studentName, int year, int maxcredithr) {
    this->id = studentId;
    this->name = studentName;
    this->year = year;
    this->maxhours = maxcredithr;
}
string Student::toLower(string s) {
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
void Student::viewGrade()
{
    cout << "Student ID: " << id << endl;
    for (auto it : grades)
    {
        cout << "course name " << it.first << endl << "Midtearm " << get<0>(it.second) << endl << "Yearwork " << get<1>(it.second) << endl << "Grade " << get<2>(it.second) << endl << "Points " << get<3>(it.second) << endl << "Final " << get<4>(it.second) << endl;
    }
}
void Student::showAvailableCourses(map<string, Course>file) {
    cout << "Available Course:\n";
    auto it = file.begin();
    for (; it != file.end(); it++) {
        if (it->second.maxseets != 0) {
            cout << "-------------------------------------------------------------\n";
            cout << "| Course Name |\tCourse Code |\tCourse Hours |\n";
            cout << "| " << it->second.courseTitle << " |\t" << it->second.courseCode << " |\t" << it->second.courseHours << " |\n";
            cout << "-------------------------------------------------------------\n";
        }


    }

}

void Student::searchforCourses(map<string, Course> file) {
    string answer, ansRegister;
    Course ansCourse;
    do {
        cout << "Enter the course name to search about it(or \"exit\" to stop) ? \n";
        getline(cin >> ws, answer);
        if (answer == "exit") {
            break;
        }
        auto it = file.find(answer);
        if (it != file.end()) {
            ansCourse = it->second;
            cout << "Course Found:\n";
            cout << "-------------------------------------------------------------\n";
            cout << "| Course Name |\tCourse Code |\tCourse Hours |\tPrerequisites|\n";
            cout << "| " << ansCourse.courseTitle << " |\t" << ansCourse.courseCode << " |\t" << ansCourse.courseHours << "\n";
            if (ansCourse.preReqisites.empty()) {
                cout << "No prerequiers";
            }
            else {
                for (string prereq : ansCourse.preReqisites)
                    cout << prereq << " ";
            }
            cout << "-------------------------------------------------------------\n";
            string missingCourse;
            cout << "Do you want register this course (yes|no) ?\n";
            getline(cin >> ws, ansRegister);
            if (toLower(ansRegister) == "yes") {
                if (registration(ansCourse)) {
                    cout << "the course registed succesfully\n";
                }
                else
                    cout << "you cannot ";
            }
        }
        else {
            cout << answer << " Course is not available\n";
        }
        cout << "Do you want search for anther course?\n";
        cin >> answer;
    } while (toLower(answer) == "y" || answer != "exit");
}
bool Student::checkPrerequisites(Course& course) {
    for (auto CourseRegisted : registedcourses) {// map[studentid]
        if (CourseRegisted == course.courseTitle) {
            cout << "This Course is Already Registered\n";
            return false;

        }
    }
    if ((currenthours + course.courseHours) > maxhours) {

        cout << "Maximum limit of Hours,Cannot Register Another Course\n";
        return false;
    }
    if (course.preReqisites.empty()) {
        cout << "pre req empty";
        return true;//the strudent can registe the course
    }
    bool precoursesDone = false;
    string cname;
    for (string precourse : course.preReqisites) {
        for (auto it : grades) {
            cname = it.first;
            char grade = get<3>(it.second);
            if (precourse == cname) {
                if (grade == 'F') {
                    precoursesDone = false;
                    break;
                }
                else {
                    precoursesDone = true;
                }
            }
        }
        if (!precoursesDone) {
            cout << "The Student must complete this course first \n Course:" + precourse;//the strudent can not registe the course
            return false;
        }
    }
    if (precoursesDone) {
        cout << "can";
        return true;//the strudent can registe the course
    }
}
bool Student::registration(Course& co) {
    if (co.maxseets == 0) {
       // cout<<""
        return false;
    
    }
    if (checkPrerequisites(co)) {
        this->currenthours += co.courseHours;
        co.maxseets--;
        registedcourses.insert(co.courseTitle);
        return true;
    }
    return false;
}


bool Student::dropCourse(string coursename) {
    bool found = false;
    for (auto registed : registedcourses) {
        if (coursename == registed) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "The Course is not Registered\n";
        return false;
    }
    else {
        if (get<0>(grades[coursename]) == NULL) {
            registedcourses.erase(coursename);
            cout << "Course dropped successfully.\n";
            return true;
        }
        else {
            cout << "You Cannot drop the Course";
            return false;
        }
    }
}
Student& Student::getstudent(string id)
{
    for (auto& it : files::students)
    {
        if (id == it.first)
            return it.second;
    }

    throw std::runtime_error("Student not found");
}



void Student::makeReport() {
    cout << "Student Grade Report\n\n";
    cout << "Student Name: " << this->name << endl;
    cout << "Student ID: " << this->id << "\n\n";

    cout << " Courses Taken:\n";
    cout << "| Course Name                  | Grade |\n";
    cout << "|------------------------------|-------|\n";

    for (auto& course : registedcourses) {
        cout << "Course Name: " << course << "\n";
        cout << "Grade: " << get<4>(grades[course]) << "\n";
    }

    cout << "\nOverall GPA:\n";
    cout << "GPA = " << fixed << setprecision(2) << gpa << endl;
}