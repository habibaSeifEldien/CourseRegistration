#pragma once
#include"files.h"
#include<iomanip>
#include<iostream>
#include<map>
#include<tuple>
#include<Set>

using namespace std;
class Student
{
public:
    Student();
    Student(string studentId, string studentName, int year, int maxcredithr);

    string id;
    string name;
    string studentemail;
    string password;
    string birthdate;
    string nationalty;
    string mobilenumber;
    string gender;
    int year = 1;
    int currenthours = 0;
    int maxhours = 16;
    float gpa = NULL;
    set<string>registedcourses;
    map<string, tuple<float, float, float, char, int>>grades;
    bool dropCourse(string coursename);
    string toLower(string s);
    void viewGrade();
    void showAvailableCourses(map<string, Course>file);
    void searchforCourses(map<string, Course> file);
    bool checkPrerequisites(Course& course);
    bool registration(Course& c);
    Student& getstudent(string id);
    void makeReport();



};