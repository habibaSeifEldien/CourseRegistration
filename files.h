#pragma once
#include"Course.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include<tuple>



using namespace std;
class Student;
class Admin;
class files
{

private:

public:
    static map<string, Student> mails;
    static map<string, Admin> adminMails;
    static map<string, Course> courses;
    static map<string, Student> students;
    //map<string ,Student>loadMailsFromCSV(const string& filename);
    string trim(const string& str);
    string Lower_Case(string name);
    void loadCourses();
    void saveCoursesToFile(const map<string, Course>& courses);
    void saveGradesToFile();
    void saveStudents();
    void loadAdminsFromCSV();
    void loadStudents();
    void loadGradesForStudent();
    string getNextStudentID();


};