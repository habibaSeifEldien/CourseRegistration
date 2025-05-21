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
    void signUp(map<string, Student>&);
    bool signIn(map<string, Student>mails, map<string, Student>fullstud, Student& s);
    bool IsChar(char c);
    bool validateEmailFormat(string StudentEmail);
    void createAdminAccount();
    bool accessAdminAccount(map<string, Admin> adminMails, Admin& a);
};