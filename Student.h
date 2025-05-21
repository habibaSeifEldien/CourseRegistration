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
    files file;
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
    unordered_map<string, tuple<float, float, float, string, int>>grades;
    bool dropCourse(Course& course);
    string toLower(string s);
    void viewGrade();
    void showAvailableCourses(unordered_map<string, Course>file);
    void searchforCourses(unordered_map<string, Course> file);
    bool checkPrerequisites(Course& course);
    bool registration(Course& c);
    Student& getstudent(string id);
    void makeReport();



};