#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include"files.h"
using namespace std;
class Admin;
class Student;
class User {
public:
    files File;
    User();
    bool validateMobileFormat(string StudentMobile);
    bool signUp(string studname, string email, int year, string pass, string dob, string nationality, string mobile, string gender);
    bool signIn(string& name, string& pass, unordered_map<string, Student> mails, unordered_map<string, Student> fullstud, Student& s);
    bool createAdminAccount(string& name, string& pass, string& email, string& id);
    bool accessAdminAccount(string& name, string& pass, unordered_map<string, Admin> adminMails, Admin& a);
    bool IsChar(char c);
    bool validateEmailFormat(string StudentEmail);
};