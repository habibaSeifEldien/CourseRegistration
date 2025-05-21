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
    void updateGrades(Student& s, string coursename, int grade, int choice);
    bool AddGrades(Student& s, string coursename, int grade, int choice, string);

    void printCourses();
    void setprereq(Course& c, list<string>);
    void UpdateMaxSeats(Course& c, int);
    void UpdateInstructor(Course& c, string);
    void Upload_Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string>preReqisites, int maxseets);
    bool DeleteCourse(string courseTitle);
    bool UpdatePrereq(Course& c, string, bool);



};