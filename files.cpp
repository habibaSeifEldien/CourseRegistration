#include "files.h"
#include"Student.h"
#include"Admin.h"
string files::trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    if (first == string::npos || last == string::npos)
        return "";
    return str.substr(first, last - first + 1);
}

string files::Lower_Case(string name) {
    for (char& Lowercase_name : name) {
        Lowercase_name = tolower(Lowercase_name);
    }
    return name;
}
void files::loadStudents() {
    ifstream file("students.csv");
    if (!file.is_open()) {
        cerr << "Failed to open students.csv\n";
        return;
    }
    string line;
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string studentID, name, email, password, yearStr, currHoursStr, maxHoursStr, gpaStr, dob, nationality, mobile, gender, coursesStr;
        getline(ss, studentID, ',');
        getline(ss, name, ',');
        getline(ss, email, ',');
        getline(ss, password, ',');
        getline(ss, yearStr, ',');
        getline(ss, currHoursStr, ',');
        getline(ss, maxHoursStr, ',');
        getline(ss, gpaStr, ',');
        getline(ss, dob, ',');
        getline(ss, nationality, ',');
        getline(ss, mobile, ',');
        getline(ss, gender, ',');
        getline(ss, coursesStr);
        int year = stoi(yearStr);
        int currentHours = stoi(currHoursStr);
        int maxHours = stoi(maxHoursStr);
        float gpa = stof(gpaStr);

        Student s;
        s.id = studentID;
        s.name = name;
        s.studentemail = email;
        s.password = password;
        s.year = year;
        s.currenthours = currentHours;
        s.maxhours = maxHours;
        s.gpa = gpa;
        s.birthdate = dob;
        s.nationalty = nationality;
        s.mobilenumber = mobile;
        s.gender = gender;

        stringstream courseSS(coursesStr);
        string courseCode;
        while (getline(courseSS, courseCode, ':')) {
            s.registedcourses.insert(courseCode);
        }
        this->students[s.id] = s;
        this->mails[s.toLower(s.name)] = s;
    }

    file.close();
}
void files::loadGradesForStudent() {

    ifstream file("grades.csv");
    if (!file.is_open()) {
        cerr << "Failed to open file.\n";
    }
    string line;
    getline(file, line);
    while (getline(file, line)) {
        stringstream ss(line);
        string studentID, courseCode, courseTitle, midtermStr, yearworkStr, finalStr, gradeStr, pointsStr;

        getline(ss, studentID, ',');
        getline(ss, courseCode, ',');
        getline(ss, courseTitle, ',');
        getline(ss, midtermStr, ',');
        getline(ss, yearworkStr, ',');
        getline(ss, finalStr, ',');
        getline(ss, gradeStr, ',');
        getline(ss, pointsStr, ',');

        float midterm = stoi(midtermStr);
        float yearwork = stoi(yearworkStr);
        float finalExam = stoi(finalStr);
        int points = stoi(pointsStr);

        auto courseData = make_tuple(midterm, yearwork, finalExam, gradeStr, points);

        if (this->students.count(studentID))
            this->students[studentID].grades[courseTitle] = courseData;

    }

    file.close();

}
void files::loadCourses() {
    ifstream file("course.csv");
    string line;

    getline(file, line); // skip header line

    while (getline(file, line)) {
        istringstream iss(line);
        Course c;
        string cell;

        getline(iss, c.courseCode, ',');
        getline(iss, c.courseTitle, ',');
        getline(iss, c.instructor, ',');

        string prereqs;
        getline(iss, prereqs, ',');
        istringstream prereqStream(prereqs);
        string prereq;
        while (getline(prereqStream, prereq, ':')) {
            if (!prereq.empty()) {
                c.preReqisites.push_back(prereq);
            }
        }

        getline(iss, cell, ',');
        c.maxseats = stoi(cell);
        getline(iss, cell, ',');
        c.courseHours = stoi(cell);
        getline(iss, cell, ',');
        c.currseats = stoi(cell);

        courses[c.courseTitle] = c;
    }

    file.close();
}

void files::saveCoursesToFile() {
    ofstream file("course.csv");

    if (!file.is_open()) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    file << "courseCode,courseTitle,instructor,preReqisites,maxseets,courseHours\n";

    for (const auto& pair : courses) {
        const Course& c = pair.second;

        file << c.courseCode << ",";
        file << c.courseTitle << ",";
        file << c.instructor << ",";

        for (const auto& pre : c.preReqisites) {
            file << pre << " ";
        }

        file << "," << c.maxseats;
        file << "," << c.courseHours;
        file << "," << c.currseats;

        file << "\n";
    }

    file.close();
}

void files::saveGradesToFile() {
    ofstream file("grades.csv");
    if (!file.is_open()) {
        cerr << "Error opening grades.csv for writing.\n";
        return;
    }

    file << "studentID,courseCode,courseTitle,midterm,yearwork,final,grade,points\n";

    for (const auto& studentPair : students) {
        const string& studentID = studentPair.first;
        const Student& student = studentPair.second;

        for (const auto& gradePair : student.grades) {
            const string& courseTitle = gradePair.first;
            const auto& gradeData = gradePair.second;

            float midterm = get<0>(gradeData);
            float yearwork = get<1>(gradeData);
            float finalExam = get<2>(gradeData);
            string grade = get<3>(gradeData);
            int points = get<4>(gradeData);


            string courseCode = "";
            if (courses.count(courseTitle)) {
                courseCode = courses[courseTitle].courseCode;
            }

            file << studentID << ","
                << courseCode << ","
                << courseTitle << ","
                << midterm << ","
                << yearwork << ","
                << finalExam << ","
                << grade << ","
                << points << "\n";
        }
    }
    cout << "done";
    file.close();
}
void files::saveStudents() {
    ofstream file("students.csv");
    if (!file.is_open()) {
        cerr << "Failed to open students.csv for writing\n";
        return;
    }

    // Write header line
    file << "ID,Name,Email,Password,Year,CurrentHours,MaxHours,GPA,DOB,Nationality,Mobile,Gender,Courses\n";

    for (const auto& pair : this->students) {
        const Student& s = pair.second;

        file << s.id << ",";
        file << s.name << ",";
        file << s.studentemail << ",";
        file << s.password << ",";
        file << s.year << ",";
        file << s.currenthours << ",";
        file << s.maxhours << ",";
        file << s.gpa << ",";
        file << s.birthdate << ",";
        file << s.nationalty << ",";
        file << s.mobilenumber << ",";
        file << s.gender << ",";

        bool first = true;
        for (const auto& course : s.registedcourses) {
            if (!first) {
                file << ":";
            }
            file << course;
            first = false;
        }
        file << "\n";
    }

    file.close();
}

void files::loadAdminsFromCSV() {
    ifstream file("admins.csv");
    if (!file.is_open()) {
        cout << "Error: Could not open file " << endl;
        return;
    }

    string line;
    // Skip header line
    getline(file, line);

    while (getline(file, line)) {
        vector<string> row;
        stringstream ss(line);
        string field;

        // Split line by commas
        while (getline(ss, field, ',')) {
            row.push_back(field);
        }

        // Make sure we have all 4 fields
        if (row.size() >= 4) {
            string FullName = row[0];
            string Password = row[1]; // Password is the 2nd field

            // Store in the map
            adminMails[Lower_Case(trim(FullName))].password = trim(Password);

            // Optional: Print loaded data for verification
            cout << "Loaded student: " << FullName << endl;
        }
    }
    file.close();
    cout << "Student data loaded successfully!" << endl << endl;
}
std::string files::getNextStudentID() {
    std::ifstream file("students.csv");
    std::string line;
    long long maxID = 0;

    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string id;
        std::getline(ss, id, ',');

        try {
            long long idNum = std::stoll(id);
            if (idNum > maxID) {
                maxID = idNum;
            }
        }
        catch (const std::exception& e) {
            // If the ID is not a number, just skip the line
            continue;
        }
    }

    return std::to_string(maxID + 1);
}
unordered_map<string, Admin> files::adminMails;
unordered_map<string, Student>files::mails;
unordered_map<string, Course>files::courses;
unordered_map<string, Student>files::students;