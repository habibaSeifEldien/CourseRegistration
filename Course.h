#pragma once
#include <iostream>
#include<vector>
#include<map>
#include<list>
#include<algorithm>
#include<string>
#include <set>
using  namespace std;
class Student;
class Course
{
public:
    int courseHours;
    string courseCode;
    string courseTitle;
    string  instructor;
    int maxseets;
    float yearwork = NULL;
    float midterm = NULL;
    float final = NULL;
    char grade = NULL;
    int points = NULL;
    list<string>preReqisites;
    Course();
    Course(string courseCode, int courseHours, string courseTitle, string instructor, list<string> preReqisites, int maxseets);
    void print();

    Course getcourse(string name);

};