#include "User.h"
#include"Student.h"
#include"Admin.h"
User::User()
{
}
bool User::IsChar(char c) {
	if (c < 'a' || c>'z') {
		return false;
	}
	else {
		return true;
	}
}
bool User::validateEmailFormat(string studentEmail) {
	int at = -1, dot = -1;
	string domain = "";
	string validExtension;

	if (!IsChar(studentEmail[0])) {
		return false;
	}
	for (int i = 0; i < studentEmail.length();i++) {
		if (studentEmail[i] == '@') {
			at = i;
		}
		if (studentEmail[i] == '.') {
			dot = i;
		}
	}
	if (at == -1 || dot == -1) {
		return false;
	}
	if (at > dot) {
		return false;
	}
	for (int i = at + 1; i < dot; i++) {
		domain += studentEmail[i];
	}
	if (domain != "gmail" and domain != "yahoo" and domain != "hotmail" and domain != "outlook") {
		return false;
	}
	validExtension = studentEmail.substr(dot + 1);
	if (validExtension != "com" and validExtension != "org" and validExtension != "edu") {
		return false;
	}
	return true;

}
bool User::validateMobileFormat(string StudentMobile) {
	if (StudentMobile.length() != 11) {
		return false;
	}
	for (char c : StudentMobile) {
		if (c < '0' || c > '9') {
			return false;
		}
	}
	if (StudentMobile[0] != '0' || StudentMobile[1] != '1' || (StudentMobile[2] != '0' and StudentMobile[2] != '1' and StudentMobile[2] != '2' and StudentMobile[2] != '5')) {
		return false;
	}

	return true;
}
bool User::signUp(string studname, string email, int year, string pass, string dob, string nationality, string mobile, string gender) {
	string ID = File.getNextStudentID();
	File.mails[studname].id = ID;
	File.mails[studname].name = studname;
	File.mails[studname].studentemail = email;
	File.mails[studname].password = pass;
	File.mails[studname].year = year;
	//currhours
	//maxhours
	//gpa
	File.mails[studname].birthdate = dob;
	File.mails[studname].nationalty = nationality;
	File.mails[studname].mobilenumber = mobile;
	File.mails[studname].gender = gender;
	//courses
		// Open the file in append mode and write the new student data
	ofstream file("students.csv", ios::app);
	if (file.is_open()) {
		file << ID << "," << studname << "," << email << "," << pass << "," << year << ","
			<< 0 << "," << 18 << "," << NULL << "," << dob << "," << nationality << "," << mobile << "," << gender << "," << NULL;
		file.close();
		cout << "Account created and data saved to file!" << endl;
		return true;
	}
	else {
		cout << "Error: Could not open file to save data." << endl;
		return false;
	}
}
bool User::signIn(string& name, string& pass, unordered_map<string, Student>mails, unordered_map<string, Student>fullstud, Student& s) {
	/*string studentName, password;
	cout << "If you have an account, sign in." << endl;
	cout << "Enter your name: ";
	getline(cin >> ws, studentName);
	string Name = File.Lower_Case(studentName);
	cout << Name << endl;*/
	string Name = File.Lower_Case(name);
	if (mails.count(Name) > 0) {
		/*cout << "Enter your password: ";
		getline(cin, password);*/
		if (mails[File.trim(Name)].password == File.trim(pass)) {
			//cout << "Welcome, " << Name << "!" << endl;
			string id = mails[Name].id;
			if (fullstud.count(id)) {
				s = fullstud[id];  // this includes grades
			}
			else {
				s = mails[Name];  // fallback (if grades not loaded)
			}
			return true;
		}
		else {
			/*cout << "Incorrect password." << endl;*/
			return false;
		}

	}
	else {
		/*cout << "Invalid studentName or password." << endl;
		cout << "Please try again." << endl;*/
		return false;
	}
}
bool User::createAdminAccount(string& name, string& pass, string& email, string& id) {
	/*string FullName, Password, Email, ID;
	cout << "Create New Admin Account" << endl;
	cout << "Full Name" << endl;
	getline(cin >> ws, FullName);
	cout << "Password" << endl;
	getline(cin >> ws, Password);
	cout << "Admin E-mail" << endl;
	getline(cin >> ws, Email);
	while (!validateEmailFormat(Email)) {
		cout << "Oops! That doesn?t look like a valid email address. Could you double-check it?" << endl;
		getline(cin >> ws, Email);

	}
	cout << "National Number" << endl;
	getline(cin >> ws, ID);*/

	File.adminMails[File.Lower_Case(File.trim(name))].password = File.trim(pass);

	// Open the file in append mode and write the new student data
	ofstream file("admins.csv", ios::app);
	if (file.is_open()) {
		file << name << "," << pass << "," << email << "," << id << endl;
		file.close();
		cout << "Account created and data saved to file!" << endl;
		return true;
	}
	else {
		cout << "Error: Could not open file to save data." << endl;
		return false;
	}


}
bool User::accessAdminAccount(string& name, string& pass, unordered_map<string, Admin>adminMails, Admin& a)
{

	/*string FullName, Password;
	cout << "If you have an account, sign in." << endl;
	cout << "Enter your full name: ";
	getline(cin >> ws, FullName);*/
	string Name = File.Lower_Case(File.trim(name));
	if (adminMails.count(Name) > 0) {
		/*cout << "Enter your password: ";
		getline(cin >> ws, Password);*/
		if (adminMails[File.trim(Name)].password == File.trim(pass)) {
			/*cout << "Welcome, " << name << "!" << endl;*/
			a = adminMails[Name];
			return true;
		}
		else {
			/*	cout << "Incorrect password." << endl;*/
			return false;
		}
	}
	else {
		/*cout << "Invalid Name or password." << endl;
		cout << "Please try again." << endl;*/
		return false;
	}
}






