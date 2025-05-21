#include "Course.h"
#include "Student.h"


Course::Course() {}
Course::Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string> preReqisites, int maxseets) {
	this->courseCode = courseCode;
	this->courseHours = courseHours;
	this->courseTitle = courseTitle;
	this->instructor = instructor;
	this->preReqisites = preReqisites;
	this->maxseets = maxseets;

}

void Course::print()
{
	std::cout << "Course Name: " << courseTitle;
	std::cout << endl << "Credit Hours: " << courseHours << endl << "Instructor: " << instructor << std::endl;
}
Course Course::getcourse(string coursename)
{
	for (auto it : files::courses)
	{
		if (coursename == it.first) { return it.second; }
		else return Course();
	}

}