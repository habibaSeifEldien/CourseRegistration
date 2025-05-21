#pragma once

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include "ui_project01.h"
#include"User.h"
#include"Student.h"
#include"Admin.h"
#include"Course.h"
#include"files.h"

class project01 : public QMainWindow
{
    Q_OBJECT

public:
    files file;
    Admin admin;
    Student stud;
    User user;

    project01(QWidget* parent = nullptr);
    ~project01();

    void AdminStart();

    void AdminSignIN();

    void AdminSigninCon();

    void AdminSignupcon();

    void AdminSignUp();

    void AdminBackToPortal();

    void AdminMCourses();

    void Admindisplaycourses();

    void AdminMSeats();

    void updatemaxseats();

    void AdminUploadCourse();

    void uplodcourse();

    void AdminDeleteCourse();

    void AdminDeleteCoursecon();

    void AdminInst();

    void updateinst();

    void AdminMPrer();

    void Adminsetprer();

    void setpre();

    void Adminupprer();

    void addpre();

    void delpre();

    void AdminMGrades();

    void AdminAddgrades();

    void addgrade();

    void UPgrades();

    void AdminUpdategrades();

    void Admincon();

    void BackToStart();

    void StudentStart();

    void SudentSignIN();

    void StudentSignUp();

    void StudentviewGrade();

    void StudentSignupCon();

    void StudentSignincon();

    void StudentBackToPortal();
    void showAvailableCourses();

    void filterCourses(const QString& text);

    void registcourse();

    void viewGrade();

    void makereport();

    void dropcourse();

    void dropCourseB();


    void StudentMakeRep();



private:
    Ui::project01Class ui;
};