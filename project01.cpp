#include "project01.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QGroupBox>


project01::project01(QWidget* parent)
    : QMainWindow(parent)
{

    ui.setupUi(this);
    ui.stackedWidget->setCurrentIndex(0);
    connect(ui.AdminB, &QPushButton::clicked, this, &project01::AdminStart);
    connect(ui.AdminSigninB, &QPushButton::clicked, this, &project01::AdminSignIN);
    connect(ui.AdminSignUpB, &QPushButton::clicked, this, &project01::AdminSignUp);

    connect(ui.pushButton_5, &QPushButton::clicked, this, &project01::AdminMCourses);

    connect(ui.pushButton_12, &QPushButton::clicked, this, &project01::AdminDeleteCourse);
    connect(ui.pushButton_11, &QPushButton::clicked, this, &project01::AdminInst);
    connect(ui.pushButton_9, &QPushButton::clicked, this, &project01::AdminMSeats);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &project01::AdminMPrer);
    connect(ui.pushButton_13, &QPushButton::clicked, this, &project01::AdminUploadCourse);

    //byrg3 ll admin sign in 
    connect(ui.logout_2, &QPushButton::clicked, this, &project01::AdminSignIN);

    //byrg3 llstart bta3t admin b3d elsign in
    connect(ui.AdminPortalbackB_8, &QPushButton::clicked, this, &project01::AdminBackToPortal);
    connect(ui.AdminPortalbackB_12, &QPushButton::clicked, this, &project01::AdminBackToPortal);



    // byrg3 l admin manage courses
    connect(ui.AdminPortalbackB_5, &QPushButton::clicked, this, &project01::AdminMCourses);
    connect(ui.AdminPortalbackB_6, &QPushButton::clicked, this, &project01::AdminMCourses);
    connect(ui.AdminPortalbackB_4, &QPushButton::clicked, this, &project01::AdminMCourses);
    connect(ui.AdminPortalbackB_3, &QPushButton::clicked, this, &project01::AdminMCourses);
    connect(ui.AdminPortalbackB_2, &QPushButton::clicked, this, &project01::AdminMCourses);
    connect(ui.AdminPortalbackB_15, &QPushButton::clicked, this, &project01::AdminMCourses);


    // byrg3 l admin manage grades
    connect(ui.AdminPortalbackB_10, &QPushButton::clicked, this, &project01::AdminMGrades);
    connect(ui.AdminPortalbackB_9, &QPushButton::clicked, this, &project01::AdminMGrades);


    //byrg3 l admin portal
    connect(ui.AdminSigninbackB, &QPushButton::clicked, this, &project01::AdminStart);
    connect(ui.AdminSignupbackB, &QPushButton::clicked, this, &project01::AdminStart);


    //byrg3 lmanage prerequisties
    connect(ui.AdminPortalbackB_14, &QPushButton::clicked, this, &project01::AdminMPrer);
    connect(ui.AdminPortalbackB_11, &QPushButton::clicked, this, &project01::AdminMPrer);


    //elback elly bywdy 3ala elstart student
    connect(ui.AdminPortalbackB_7, &QPushButton::clicked, this, &project01::StudentStart);
    connect(ui.StudentSignupbackB_3, &QPushButton::clicked, this, &project01::StudentStart);
    connect(ui.StudentSignupbackB_2, &QPushButton::clicked, this, &project01::StudentStart);


    //byrg3 l student portal
    connect(ui.logout, &QPushButton::clicked, this, &project01::SudentSignIN);
    connect(ui.StudentSignupbackB, &QPushButton::clicked, this, &project01::StudentBackToPortal);
    connect(ui.StudentSigninbackB_2, &QPushButton::clicked, this, &project01::StudentBackToPortal);
    connect(ui.StudentB, &QPushButton::clicked, this, &project01::StudentBackToPortal);



    // byrg3 l awl saf7a 
    connect(ui.StudentPortalbackB_2, &QPushButton::clicked, this, &project01::BackToStart);
    connect(ui.AdminPortalbackB, &QPushButton::clicked, this, &project01::BackToStart);


    connect(ui.StudentSignUpB, &QPushButton::clicked, this, &project01::StudentSignUp);
    connect(ui.StudentSigninB, &QPushButton::clicked, this, &project01::SudentSignIN);

    connect(ui.pushButton, &QPushButton::clicked, this, &project01::AdminSigninCon);
    connect(ui.AdminSignUpconB, &QPushButton::clicked, this, &project01::AdminSignupcon);
    connect(ui.StudentSignIncon, &QPushButton::clicked, this, &project01::StudentSignincon);

    connect(ui.pushButton_3, &QPushButton::clicked, this, &project01::showAvailableCourses);
    connect(ui.tableWidget, &QTableWidget::cellClicked, this, [=](int row, int column) {
        ui.pushButton_7->setVisible(true);
        });
    connect(ui.StudentSignUpconB_2, &QPushButton::clicked, this, &project01::StudentSignupCon);
    connect(ui.viesgrades, &QPushButton::clicked, this, &project01::StudentviewGrade);
    connect(ui.lineEdit, &QLineEdit::textChanged, this, &project01::filterCourses);



    connect(ui.pushButton_4, &QPushButton::clicked, this, &project01::StudentMakeRep);
    connect(ui.pushButton_6, &QPushButton::clicked, this, &project01::dropcourse);
    connect(ui.pushButton_21, &QPushButton::clicked, this, &project01::dropCourseB);
    connect(ui.pushButton_7, &QPushButton::clicked, this, &project01::registcourse);
    connect(ui.pushButton_18, &QPushButton::clicked, this, &project01::AdminDeleteCoursecon);
    connect(ui.pushButton_17, &QPushButton::clicked, this, &project01::uplodcourse);
    connect(ui.pushButton_19, &QPushButton::clicked, this, &project01::updateinst);
    connect(ui.pushButton_14, &QPushButton::clicked, this, &project01::Admindisplaycourses);
    connect(ui.pushButton_20, &QPushButton::clicked, this, &project01::updatemaxseats);
    connect(ui.pushButton_15, &QPushButton::clicked, this, &project01::Adminsetprer);
    connect(ui.pushButton_26, &QPushButton::clicked, this, &project01::setpre);
    connect(ui.pushButton_29, &QPushButton::clicked, this, &project01::addpre);
    connect(ui.pushButton_30, &QPushButton::clicked, this, &project01::delpre);
    connect(ui.pushButton_10, &QPushButton::clicked, this, &project01::AdminMGrades);
    connect(ui.pushButton_23, &QPushButton::clicked, this, &project01::AdminAddgrades);
    connect(ui.pushButton_22, &QPushButton::clicked, this, &project01::AdminUpdategrades);
    connect(ui.pushButton_25, &QPushButton::clicked, this, &project01::UPgrades);
    connect(ui.pushButton_24, &QPushButton::clicked, this, &project01::addgrade);

}
project01::~project01()
{
}
void project01::AdminStart()
{
    ui.stackedWidget->setCurrentWidget(ui.page_2);
}
void project01::AdminSignIN()
{
    ui.stackedWidget->setCurrentWidget(ui.page_3);
    ui.AdminName->clear();
    ui.AdminPass->clear();


}
void project01::AdminSignUp()
{
    ui.stackedWidget->setCurrentWidget(ui.page_4);
}
void project01::AdminSigninCon() {
    QString qName = ui.AdminName->text();
    QString qPass = ui.AdminPass->text();

    std::string name = qName.toStdString();
    std::string pass = qPass.toStdString();


    if (user.accessAdminAccount(name, pass, file.adminMails, admin)) {
        ui.stackedWidget->setCurrentWidget(ui.page_14);
        ui.Welcomelabel_3->setText(qName);

    }
    else {
        QMessageBox::warning(this, "Error", "Invalid name or password.");
    }
}
void project01::AdminSignupcon() {
    QString qName = ui.AdminName_2->text();
    QString qPass = ui.AdminPass_2->text();
    QString qEmail = ui.AdminPass_3->text();
    QString qID = ui.AdminPass_4->text();

    std::string name = qName.toStdString();
    std::string pass = qPass.toStdString();
    std::string email = qEmail.toStdString();
    std::string id = qID.toStdString();
    if (user.validateEmailFormat(email)) {
        if (user.createAdminAccount(name, pass, email, id)) {
            QMessageBox::information(this, "Success", "Account created and data saved to file!");
        }
        else {
            QMessageBox::critical(this, "Error", "Could not open file to save data.");
        }
    }
    else {
        QMessageBox::information(this, "Error", "That doesn't look like a valid email address.\n Can you double-check it?");

    }



}
void project01::AdminBackToPortal()
{
    ui.stackedWidget->setCurrentWidget(ui.page_14);
}
void project01::AdminMCourses()
{
    ui.stackedWidget->setCurrentWidget(ui.page_15);
}
void project01::Admindisplaycourses() {
    ui.stackedWidget->setCurrentWidget(ui.page_25);
    if (!file.courses.empty()) {

        ui.scrollArea_2->setWidgetResizable(true);
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui.scrollAreaWidgetContents_2->layout());
        if (!layout) {
            layout = new QVBoxLayout();
            ui.scrollAreaWidgetContents_2->setLayout(layout);
        }
        QLayoutItem* item;
        while ((item = layout->takeAt(0)) != nullptr) {
            if (item->widget()) {
                item->widget()->deleteLater();
            }
            delete item;
        }
        for (const auto& pair : file.courses) {
            const Course& course = pair.second;

            QString title = QString::fromStdString(course.courseTitle);
            QString code = QString::fromStdString(course.courseCode);
            QString instructor = QString::fromStdString(course.instructor);
            int maxSeats = course.maxseats;
            int currentSeats = course.currseats;

            // ????? ??? prerequisites ??? string ?????
            QString prereqs;
            for (const auto& pre : course.preReqisites) {
                prereqs += QString::fromStdString(pre) + ", ";
            }
            if (!prereqs.isEmpty())
                prereqs.chop(2); // remove last ", "

            QGroupBox* box = new QGroupBox(title);
            box->setStyleSheet(
                "QGroupBox {"
                " border: 2px solid #465c90;"
                " border-radius: 10px;"
                " margin-top: 10px;"
                " font-weight: bold;"
                " font-size: 16px;"
                " padding: 10px;"
                " color: #465c90;"
                "}"
                "QLabel {"
                " font-size: 14px;"
                " color: #465c90;"
                " font-weight: bold;"
                " padding: 2px;"
                "}"
            );

            QVBoxLayout* boxLayout = new QVBoxLayout(box);
            boxLayout->addWidget(new QLabel("Code: " + code));
            boxLayout->addWidget(new QLabel("Instructor: " + instructor));
            boxLayout->addWidget(new QLabel("Max Seats: " + QString::number(maxSeats)));
            boxLayout->addWidget(new QLabel("Current Seats: " + QString::number(currentSeats)));
            boxLayout->addWidget(new QLabel("Prerequisites: " + prereqs));

            layout->addWidget(box);
        }

        if (stud.grades.empty()) {
            QLabel* emptyLabel = new QLabel("                         " + QString::fromStdString(stud.name));

            layout->addWidget(emptyLabel);

        }

    }
    else {
        QMessageBox::warning(this, "Student Not Found", "No student found with ID: 2023170302");
    }
}
void project01::AdminMSeats()
{
    ui.stackedWidget->setCurrentWidget(ui.page_21);
}
void project01::updatemaxseats() {
    QString courseName = ui.StudentName_11->text();
    int maxseat = ui.StudentName_10->text().toInt();

    string cname = courseName.toStdString();
    admin.UpdateMaxSeats(file.courses[cname], maxseat);
    file.saveCoursesToFile();
    QMessageBox::information(this, "Success", "Max  for This Course is Now " + QString::number(maxseat));

}
void project01::AdminUploadCourse()
{
    ui.stackedWidget->setCurrentWidget(ui.page_17);


}
void project01::uplodcourse() {
    QString Coursename = ui.StudentName_2->text();
    QString Courscode = ui.StudentName_3->text();
    int maxseet = ui.StudentName_4->text().toInt();
    int coursehours = ui.StudentName_7->text().toInt();
    QString instructor = ui.StudentName_6->text();
    QString pre = ui.StudentName_5->text();
    string cname = Coursename.toStdString();
    string code = Courscode.toStdString();
    string inst = instructor.toStdString();
    QStringList prelist = pre.split(",", Qt::SkipEmptyParts);
    list<std::string> values;
    for (const QString& item : prelist) {
        values.push_back(item.trimmed().toStdString());
    }
    admin.Upload_Course(code, coursehours, cname, inst, values, maxseet);
    file.saveCoursesToFile();
    QMessageBox::information(this, "Success", "This Course is uploded Successfuly");

}
void project01::AdminDeleteCourse()
{
    ui.stackedWidget->setCurrentWidget(ui.page_18);

}
void project01::AdminDeleteCoursecon() {
    QString Coursename = ui.StudentName_8->text();
    std::string cname = Coursename.toStdString();

    if (admin.DeleteCourse(cname)) {
        QMessageBox::information(this, "Success", "This Course is deleted Successfuly");
        file.saveCoursesToFile();
    }
    else {
        QMessageBox::warning(this, "Error", "This Course not found.");
    }
}
void project01::AdminInst()
{
    ui.stackedWidget->setCurrentWidget(ui.page_20);
}
void project01::updateinst() {
    QString courseName = ui.StudentName_12->text();
    QString instructorname = ui.StudentName_9->text();

    string cname = courseName.toStdString();
    string iname = instructorname.toStdString();
    admin.UpdateInstructor(file.courses[cname], iname);
    file.saveCoursesToFile();
    QMessageBox::information(this, "Success", "Instructor for This Course is Now " + instructorname);


}
void project01::AdminMPrer()
{
    ui.stackedWidget->setCurrentWidget(ui.page_16);

}
void project01::Adminsetprer() {
    ui.stackedWidget->setCurrentWidget(ui.page_26);
}
void project01::setpre() {
    QString Coursename = ui.StudentName_18->text();
    string cname = Coursename.toStdString();

    std::list<std::string> result;

    QString inputText = ui.StudentName_17->text();
    QStringList items = inputText.split(",", Qt::SkipEmptyParts);
    for (const QString& item : items) {
        QString trimmed = item.trimmed();
        result.push_back(trimmed.toStdString());
    }
    admin.setprereq(file.courses[cname], result);
    file.saveCoursesToFile();
    QMessageBox::information(this, "Success", "Prerequisites have been set successfully for This course");

}
void project01::Adminupprer() {
    ui.stackedWidget->setCurrentWidget(ui.page_28);
}
void project01::addpre() {
    QString Coursename = ui.StudentName_24->text();
    string cname = Coursename.toStdString();
    QString prename = ui.StudentName_23->text();
    string pname = prename.toStdString();

    if (admin.UpdatePrereq(file.courses[cname], pname, true)) {
        file.saveCoursesToFile();
        QMessageBox::information(this, "Success", "Prerequisit has been Added successfully for This course");
    }
}
void project01::delpre() {
    QString Coursename = ui.StudentName_24->text();
    string cname = Coursename.toStdString();
    QString prename = ui.StudentName_23->text();
    string pname = prename.toStdString();
    if (admin.UpdatePrereq(file.courses[cname], pname, false)) {
        file.saveCoursesToFile();
        QMessageBox::information(this, "Success", "prerequisite has been Added successfully for This course");
    }
    else {
        QMessageBox::warning(this, "Error", "This Course is Not Found in " + Coursename + "prerequisities");

    }



}
void project01::BackToStart()
{
    ui.stackedWidget->setCurrentWidget(ui.page_1);
}
void project01::AdminMGrades() {
    ui.stackedWidget->setCurrentWidget(ui.page_22);

}
void project01::AdminAddgrades() {
    ui.stackedWidget->setCurrentWidget(ui.page_23);
}
void project01::addgrade() {
    QString StudentID = ui.StudentName_14->text();
    string sID = StudentID.toStdString();
    if (file.students.find(sID) == file.students.end()) {
        QMessageBox::warning(this, "Error", "This Student ID is not Found.");
        addgrade();
    }
    QString Coursename = ui.StudentName_20->text();
    string cname = Coursename.toStdString();
    QString selected = ui.comboBox_2->currentText();
    string  sel = selected.toStdString();
    int grade;
    QString lett = "";
    bool done = false;
    if (sel == "Midterm") {
        grade = ui.StudentName_13->text().toInt();
        if (admin.AddGrades(file.students[sID], cname, grade, 1, ""))
            done = true;
    }
    else if (sel == "Yerwork") {
        grade = ui.StudentName_13->text().toInt();
        if (admin.AddGrades(file.students[sID], cname, grade, 2, ""))
            done = true;
    }
    else if (sel == "Final") {
        grade = ui.StudentName_13->text().toInt();
        if (admin.AddGrades(file.students[sID], cname, grade, 3, ""))
            done = true;
    }
    else if (sel == "Grade") {
        lett = ui.StudentName_13->text();
        string g = lett.toStdString();
        if (admin.AddGrades(file.students[sID], cname, 0, 4, g))
            done = true;
    }
    else if (sel == "Points") {
        grade = ui.StudentName_13->text().toInt();
        if (admin.AddGrades(file.students[sID], cname, grade, 5, ""))
            done = true;
    }
    if (done) {
        file.saveStudents();
        file.saveGradesToFile();
        QMessageBox::information(this, "Success", "The Grade Has been Added Successfuly");
    }
    else {
        QMessageBox::warning(this, "Error", "This Student is not registered in course:.");

    }
}
void project01::AdminUpdategrades() {
    ui.stackedWidget->setCurrentWidget(ui.page_24);

}
void project01::UPgrades() {
    QString StudentID = ui.StudentName_16->text();
    string sID = StudentID.toStdString();
    QString Coursename = ui.StudentName_19->text();
    string cname = Coursename.toStdString();
    QString selected = ui.comboBox->currentText();
    string  sel = selected.toStdString();
    int grade = ui.StudentName_15->text().toInt();
    if (sel == "Midterm") {
        admin.updateGrades(file.students[sID], cname, grade, 1);
    }
    else if (sel == "Yerwork") {
        admin.updateGrades(file.students[sID], cname, grade, 2);
    }

    file.saveStudents();
    file.saveGradesToFile();
    QMessageBox::information(this, "Success", "The Grade Has been Updated Successfuly");
}
void project01::StudentStart()
{
    ui.stackedWidget->setCurrentWidget(ui.page_8);
}
void project01::SudentSignIN()
{
    ui.stackedWidget->setCurrentWidget(ui.page_6);

}
void project01::StudentSignUp()
{
    ui.stackedWidget->setCurrentWidget(ui.page_7);
}
void project01::StudentSignupCon() {
    QString qName = ui.studUPname->text();
    QString qPass = ui.studUPpass->text();
    QString qEmail = ui.studUPemail->text();
    int year = ui.studUPid_3->text().toInt();
    QString qNationality = ui.studUPid_2->text();
    QString qPhonenumber = ui.studUPidPhone->text();
    QString qdob = ui.studDate->text();

    std::string name = qName.toStdString();
    std::string pass = qPass.toStdString();
    std::string email = qEmail.toStdString();
    std::string nationality = qNationality.toStdString();
    std::string phonenumber = qPhonenumber.toStdString();
    std::string dob = qdob.toStdString();
    std::string gender;
    if (ui.female)
        gender = "f";
    if (ui.male)
        gender = "m";

    if (user.validateEmailFormat(email)) {
        if (user.validateMobileFormat(phonenumber)) {
            if (user.signUp(name, email, year, pass, dob, nationality, phonenumber, gender)) {
                QMessageBox::information(this, "Success", "Account created and data saved to file!");
            }
            else {
                QMessageBox::critical(this, "Error", "Could not open file to save data.");
            }
        }
        else {
            QMessageBox::information(this, "Error", "Invalid Phone Number!");
        }
    }
    else {
        QMessageBox::information(this, "Error", "That doesn't look like a valid email address.\n Can you double-check it?");

    }
}
void project01::StudentSignincon() {
    QString qName = ui.StudentName->text();
    QString qPass = ui.StudentPass->text();

    std::string name = qName.toStdString();
    std::string pass = qPass.toStdString();


    if (user.signIn(name, pass, file.mails, file.students, stud)) {
        ui.stackedWidget->setCurrentWidget(ui.page_8);
        ui.Welcomelabel->setText(qName);

    }
    else {
        QMessageBox::warning(this, "Error", "Invalid name or password.");
    }

}
void project01::StudentviewGrade()
{
    ui.stackedWidget->setCurrentWidget(ui.page_11);
    viewGrade();

}
void project01::StudentBackToPortal()
{
    ui.stackedWidget->setCurrentWidget(ui.page_5);
}
void project01::showAvailableCourses() {
    ui.stackedWidget->setCurrentWidget(ui.page_9);

    QTableWidget* table = ui.tableWidget;

    table->setRowCount(0);
    int row = 0;

    for (const auto& it : file.courses) {
        if (it.second.maxseats != 0) {
            table->insertRow(row);
            QTableWidgetItem* titleItem = new QTableWidgetItem(QString::fromStdString(it.second.courseTitle));

            QTableWidgetItem* codeItem = new QTableWidgetItem(QString::fromStdString(it.second.courseCode));
            QTableWidgetItem* hoursItem = new QTableWidgetItem(QString::number(it.second.courseHours));

            titleItem->setTextAlignment(Qt::AlignCenter);
            codeItem->setTextAlignment(Qt::AlignCenter);
            hoursItem->setTextAlignment(Qt::AlignCenter);

            table->setItem(row, 0, titleItem);
            table->setItem(row, 1, codeItem);
            table->setItem(row, 2, hoursItem);

            row++;
        }
    }
    table->resizeRowsToContents();
    ui.pushButton_7->setVisible(false);
    ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui.tableWidget->horizontalHeader()->setFixedHeight(40);
    ui.tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    ui.tableWidget->verticalHeader()->setDefaultSectionSize(30);
    ui.tableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);


}
void project01::filterCourses(const QString& text) {
    QTableWidget* table = ui.tableWidget;
    for (int i = 0; i < table->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < table->columnCount(); ++j) {
            QTableWidgetItem* item = table->item(i, j);
            if (item && item->text().toLower().contains(text.toLower())) {
                match = true;
                break;
            }
        }
        table->setRowHidden(i, !match);
    }
}
void project01::registcourse() {
    QTableWidget* table = ui.tableWidget;
    QList<QTableWidgetItem*> selectedItems = table->selectedItems();

    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "No Selection", "Please select a course to Enroll.");
        return;
    }
    QString courseName = selectedItems[0]->text();
    std::string cname = courseName.toStdString();
    Course& c = file.courses[cname];
    if (stud.registration(c)) {
        QMessageBox::information(this, "Success", "This Course is Enrolled Successfuly");
        file.students[stud.id] = stud;
        file.saveCoursesToFile();
        file.saveStudents();
        showAvailableCourses();
    }
    else {
        QMessageBox::warning(this, "Error", "You Can't Enroll this course: ");

    }
}
void project01::viewGrade()
{
    if (file.students.count(stud.id)) {

        ui.scrollArea02->setWidgetResizable(true);
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui.scrollAreaWidgetContents02->layout());
        if (!layout) {
            layout = new QVBoxLayout();
            ui.scrollAreaWidgetContents02->setLayout(layout);
        }
        QLayoutItem* item;
        while ((item = layout->takeAt(0)) != nullptr) {
            if (item->widget()) {
                item->widget()->deleteLater();
            }
            delete item;
        }
        for (const auto& course : stud.grades) {
            QString courseName = QString::fromStdString(course.first);
            float midterm = std::get<0>(course.second);
            float yearWork = std::get<1>(course.second);
            float final = std::get<2>(course.second);
            string grade = std::get<3>(course.second);
            float points = std::get<4>(course.second);

            QGroupBox* box = new QGroupBox(courseName);
            box->setStyleSheet(
                "QGroupBox {"
                " border: 2px solid #465c90;"
                " border-radius: 10px;"
                " margin-top: 10px;"
                " font-weight: bold;"
                " font-size: 16px;"
                " padding: 10px;"
                " color: #465c90;"
                "}"
                "QLabel {"
                " font-size: 14px;"
                " color: #465c90;"
                " font-weight: bold;"
                " padding: 2px;"
                "}"
            );

            QVBoxLayout* boxLayout = new QVBoxLayout(box);
            boxLayout->addWidget(new QLabel("Midterm: " + QString::number(midterm)));
            boxLayout->addWidget(new QLabel("Year Work: " + QString::number(yearWork)));
            boxLayout->addWidget(new QLabel("Final: " + QString::number(final)));
            boxLayout->addWidget(new QLabel("Grade: " + QString::fromStdString(grade)));
            boxLayout->addWidget(new QLabel("Points: " + QString::number(points)));


            layout->addWidget(box);
        }

        if (stud.grades.empty()) {
            QLabel* emptyLabel = new QLabel("                         " + QString::fromStdString(stud.name));

            layout->addWidget(emptyLabel);

        }

    }
    else {
        QMessageBox::warning(this, "Student Not Found", "No student found with ID: 2023170302");
    }
}
void project01::StudentMakeRep() {
    ui.stackedWidget->setCurrentWidget(ui.page_13);
    makereport();
}
QLabel* makeLabel(const QString& text, const QString& color = "#2a4b6f", int size = 13, bool bold = false) {
    QLabel* label = new QLabel(text);
    QString style = QString("color: %1; font-size: %2px;").arg(color).arg(size);
    if (bold) style += " font-weight: bold;";
    label->setStyleSheet(style);
    return label;
}
void project01::makereport()
{
    if (!file.students.count(stud.id)) {
        QMessageBox::warning(this, "Student Not Found", "No student found with the current ID.");
        return;
    }

    ui.scrollArea_3->setWidgetResizable(true);

    QVBoxLayout* mainLayout = qobject_cast<QVBoxLayout*>(ui.scrollAreaWidgetContents_3->layout());
    if (!mainLayout) {
        mainLayout = new QVBoxLayout();
        ui.scrollAreaWidgetContents_3->setLayout(mainLayout);
    }



    if (ui.frame_42->layout()) {
        QLayout* oldLayout = ui.frame_42->layout();
        QLayoutItem* oldItem;
        while ((oldItem = oldLayout->takeAt(0)) != nullptr) {
            if (oldItem->widget()) {
                oldItem->widget()->setParent(nullptr);
                oldItem->widget()->deleteLater();
            }
            delete oldItem;
        }
        delete oldLayout;
    }

    QVBoxLayout* infoLayout = new QVBoxLayout(ui.frame_42);
    ui.frame_42->setLayout(infoLayout);
    QLabel* back = makeLabel("<-Back", "#465c90", 18, true);
    QPushButton* myButton = new QPushButton("<-Back", ui.frame_42);
    infoLayout->addWidget(myButton);

    myButton->setStyleSheet(
        "QPushButton {"
        " background-color: #d3d3d3;"
        " color: #465c90;"
        " font-size: 14px;"
        " font-weight: bold;"
        " border-radius: 6px;"
        " padding: 6px 12px;"
        "}"
        "QPushButton:hover {"
        " background-color: #dddddd;"
        "}"
    );
    connect(myButton, &QPushButton::clicked, this, &project01::StudentStart);

    infoLayout->addWidget(makeLabel("?? Student Grade Report", "#465c90", 18, true));
    infoLayout->addWidget(makeLabel("?? Name: " + QString::fromStdString(stud.name), "#465c90", 14, true));
    infoLayout->addWidget(makeLabel("?? ID: " + QString::fromStdString(stud.id), "#465c90", 13, true));
    infoLayout->addSpacing(10);

    mainLayout->addWidget(ui.frame_42);


    if (ui.frame_47->layout()) {
        QLayout* oldGradesLayout = ui.frame_47->layout();
        QLayoutItem* oldItem;
        while ((oldItem = oldGradesLayout->takeAt(0)) != nullptr) {
            if (oldItem->widget()) {
                oldItem->widget()->setParent(nullptr);
                oldItem->widget()->deleteLater();
            }
            delete oldItem;
        }
        delete oldGradesLayout;
    }

    QVBoxLayout* gradesLayout = new QVBoxLayout(ui.frame_47);
    ui.frame_47->setLayout(gradesLayout);

    gradesLayout->addWidget(makeLabel("?? Courses Taken:", "#465c90", 14, true));

    if (stud.registedcourses.empty()) {
        gradesLayout->addWidget(makeLabel("?? No registered courses.", "#465c90", 13, true));
    }
    else {
        for (const std::string& courseName : stud.registedcourses) {
            if (stud.grades.count(courseName)) {
                auto& gradeInfo = stud.grades[courseName];
                QString grade = QString::fromStdString(get<3>(gradeInfo));

                QGroupBox* courseBox = new QGroupBox("?? " + QString::fromStdString(courseName));
                QVBoxLayout* boxLayout = new QVBoxLayout(courseBox);
                boxLayout->addWidget(makeLabel("?? Grade: " + grade, "#465c90", 13, true));

                courseBox->setStyleSheet(
                    "QGroupBox {"
                    " border: 1px solid #467aa7;"
                    " border-radius: 8px;"
                    " margin-top: 10px;"
                    " padding: 8px;"
                    " font-weight: bold;"
                    " color: #465c90;"
                    "}"
                );

                gradesLayout->addWidget(courseBox);
            }
            else {
                QGroupBox* courseBox = new QGroupBox("?? " + QString::fromStdString(courseName));
                QVBoxLayout* boxLayout = new QVBoxLayout(courseBox);
                boxLayout->addWidget(makeLabel("?? No grade yet", "#a0522d", 13, true));  // ??? ????? ?????? ????

                courseBox->setStyleSheet(
                    "QGroupBox {"
                    " border: 1px solid #d2b48c;"
                    " border-radius: 8px;"
                    " margin-top: 10px;"
                    " padding: 8px;"
                    " font-weight: bold;"
                    " color: #a0522d;"
                    "}"
                );

                gradesLayout->addWidget(courseBox);
            }

        }
    }

    gradesLayout->addSpacing(15);
    gradesLayout->addWidget(makeLabel("?? Overall GPA: " + QString::number(stud.gpa, 'f', 2), "#465c90", 14, true));

    mainLayout->addWidget(ui.frame_47);

    ui.scrollAreaWidgetContents_3->adjustSize();
    ui.scrollArea_3->viewport()->update();
}
void project01::dropcourse() {
    ui.stackedWidget->setCurrentWidget(ui.page_10);
    QTableWidget* table = ui.tableWidget_2;
    table->clearContents();

    table->setRowCount(0);
    int row = 0;
    table->setColumnCount(1);


    table->setColumnCount(1);
    QStringList headers;
    headers << "Course Name";
    table->setHorizontalHeaderLabels(headers);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    if (stud.registedcourses.empty()) {
        QMessageBox::information(this, "No Courses", "You don't have any courses to drop.");
        ui.stackedWidget->setCurrentIndex(15);

    }
    else {
        for (const auto& it : stud.registedcourses) {
            QFont font;
            font.setPointSize(16);
            font.Bold;// or setPixelSize(16)

            table->insertRow(row);
            QTableWidgetItem* titleItem = new QTableWidgetItem(QString::fromStdString(it));
            titleItem->setFont(font);
            titleItem->setTextAlignment(Qt::AlignCenter);
            table->setItem(row, 0, titleItem);
            row++;
        }
    }

    table->resizeRowsToContents();
    ui.pushButton_7->setVisible(false);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->resizeRowsToContents();
    table->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    table->horizontalHeader()->setFixedHeight(40);
    table->verticalHeader()->setDefaultSectionSize(30);
    table->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

}
void project01::dropCourseB() {
    QTableWidget* table = ui.tableWidget_2;
    QList<QTableWidgetItem*> selectedItems = table->selectedItems();

    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "No Selection", "Please select a course to drop.");
        return;
    }
    QString courseName = selectedItems[0]->text();
    std::string cname = courseName.toStdString();

    if (stud.dropCourse(file.courses[cname])) {
        dropcourse();
        QMessageBox::information(this, "Success", "This Course is dropped Successfuly");
        file.students[stud.id] = stud;
        file.saveCoursesToFile();
        file.saveStudents();

    }
    else {
        QMessageBox::warning(this, "Error", "You Can't drop this course.");

    }
    dropcourse();
}



