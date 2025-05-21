#pragma once
#include"Student.h"
#include<vector>
#include <tuple>
#include <map>
#include <queue>
#include<list>
using namespace std;

class Admin
{
private:
    deque<Student>Wlist;
    string id;

public:
    string name;
    string password;
    files file;
    Student st;
    Course course;

    Admin();
    Admin(string id, string name, string pass);
    void calculatGpa(Student& s);
    void waitlist(Student& s);
    void manageGrades(string id);
    void updateGrades(string studid, string coursename);
    void AddGrades(string studid, string coursename);

    void printCourses();
    void setprereq(Course& c);
    void UpdateMaxSeats(Course& c);
    void UpdateInstructor(Course& c);
    void Upload_Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string>preReqisites, int maxseets);
    void DeleteCourse(string courseTitle);
    void UpdatePrereq(Course& c);
    Course& findCourse(string courseTitle);
    


};