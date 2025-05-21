#include "Course.h"
#include "Student.h"
Course::Course() {}
Course::Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string> preReqisites, int maxseats, int currseats) {
    this->courseCode = courseCode;
    this->courseHours = courseHours;
    this->courseTitle = courseTitle;
    this->instructor = instructor;
    this->preReqisites = preReqisites;
    this->maxseats = maxseats;
    this->currseats = currseats;

}
void Course::print()
{
    cout << "Course Name: " << courseTitle;
    cout << endl << "Credit Hours: " << courseHours << endl << "Instructor: " << instructor << std::endl;
}
Course Course::getcourse(string coursename)
{
    auto it = files::courses.find(coursename);
    if (it != files::courses.end()) {
        return it->second;
    }
    return Course();
}