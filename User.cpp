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


void User::signUp(map<string, Student>& mails) {
	string StudentName, ND, DateOfBirth, Nationality, StudentMobile, Gender, StudentEmail, password, ID;
	int year;
	cout << "Create New Student Account" << endl;
	cout << "Full Name" << endl;
	getline(cin >> ws, StudentName);
	cout << "Enter year";
	cin >> year;
	cout << "National Number" << endl;
	getline(cin >> ws, ND);
	cout << "Date Of Birth" << endl;
	getline(cin >> ws, DateOfBirth);
	cout << "Nationality" << endl;
	getline(cin >> ws, Nationality);
	cout << "Student Mobile Number" << endl;
	getline(cin >> ws, StudentMobile);
	while (!validateMobileFormat(StudentMobile)) {
		cout << "Invalid mobile number.Please enter a valid mobile number." << endl;
		cout << "Student Mobile Number" << endl;
		getline(cin, StudentMobile);
	}
	cout << "Gender" << endl;
	getline(cin, Gender);
	cout << "Student E-mail" << endl;
	getline(cin, StudentEmail);
	while (!validateEmailFormat(StudentEmail)) {
		cout << "Oops! That doesn?t look like a valid email address. Could you double-check it?" << endl;
		getline(cin, StudentEmail);

	}
	cout << "Password" << endl;
	getline(cin, password);
	cout << "ID" << "\n";
	getline(cin, ID);
	mails[StudentName].id = ID;
	mails[StudentName].name = StudentName;
	mails[StudentName].studentemail = StudentEmail;
	mails[StudentName].password = password;
	mails[StudentName].year = year;
	//currhours
	//maxhours
	//gpa
	mails[StudentName].birthdate = DateOfBirth;
	mails[StudentName].nationalty = Nationality;
	mails[StudentName].mobilenumber = StudentMobile;
	mails[StudentName].gender = Gender;
	//courses
		// Open the file in append mode and write the new student data
	ofstream file("students.csv", ios::app);
	if (file.is_open()) {
		file << ID << "," << StudentName << "," << StudentEmail << "," << password << "," << year << ","
			<< 0 << "," << 18 << "," << NULL << "," << DateOfBirth << "," << Nationality << "," << StudentMobile << "," << Gender << "," << NULL;
		file.close();
		cout << "Account created and data saved to file!" << endl;
	}
	else {
		cout << "Error: Could not open file to save data." << endl;
	}
}
bool User::signIn(map<string, Student>mails, map<string, Student>fullstud, Student& s) {
	string studentName, password;
	cout << "If you have an account, sign in." << endl;
	cout << "Enter your name: ";
	getline(cin >> ws, studentName);
	string Name = File.Lower_Case(studentName);
	cout << Name << endl;
	if (mails.count(Name) > 0) {
		cout << "Enter your password: ";
		getline(cin, password);
		if (mails[File.trim(Name)].password == File.trim(password)) {
			cout << "Welcome, " << Name << "!" << endl;
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
			cout << "Incorrect password." << endl; return false;
		}

	}
	else {
		cout << "Invalid studentName or password." << endl;
		cout << "Please try again." << endl;
		return false;
	}
}


void User::createAdminAccount() {
	string FullName, Password, Email, ID;
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
	getline(cin >> ws, ID);

	File.adminMails[File.Lower_Case(File.trim(FullName))].password = File.trim(Password);

	// Open the file in append mode and write the new student data
	ofstream file("admins.csv", ios::app);
	if (file.is_open()) {
		file << FullName << "," << Password << "," << Email << "," << ID << endl;
		file.close();
		cout << "Account created and data saved to file!" << endl;
	}
	else {
		cout << "Error: Could not open file to save data." << endl;
	}


}
bool User::accessAdminAccount(map<string, Admin>adminMails, Admin& a)
{
	string FullName, Password;
	cout << "If you have an account, sign in." << endl;
	cout << "Enter your full name: ";
	getline(cin >> ws, FullName);
	string Name = File.Lower_Case(File.trim(FullName));
	if (adminMails.count(Name) > 0) {
		cout << "Enter your password: ";
		getline(cin >> ws, Password);
		if (adminMails[File.trim(Name)].password == File.trim(Password)) {
			cout << "Welcome, " << Name << "!" << endl;
			a = adminMails[Name];
			return true;
		}
		else {
			cout << "Incorrect password." << endl;
			return false;
		}
	}
	else {
		cout << "Invalid Name or password." << endl;
		cout << "Please try again." << endl;
		return false;
	}
}






