#include "project01.h"

project01::project01(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.AdminB, &QPushButton::clicked, this, &project01::AdminStart);
    connect(ui.AdminSigninB, &QPushButton::clicked, this, &project01::AdminSignIN);
    connect(ui.AdminSignUpB, &QPushButton::clicked, this, &project01::AdminSignUp);
    connect(ui.AdminSigninbackB, &QPushButton::clicked, this, &project01::AdminBackToPortal);
    connect(ui.AdminSignupbackB, &QPushButton::clicked, this, &project01::AdminBackToPortal);
    connect(ui.AdminPortalbackB, &QPushButton::clicked, this, &project01::BackToStart);
    connect(ui.StudentB, &QPushButton::clicked, this, &project01::StudentStart);
    connect(ui.StudentSignUpB, &QPushButton::clicked, this, &project01::StudentSignUp);
    connect(ui.StudentSigninB, &QPushButton::clicked, this, &project01::SudentSignIN);
    connect(ui.StudentSignupbackB, &QPushButton::clicked, this, &project01::StudentBackToPortal);
    connect(ui.StudentSigninbackB_2, &QPushButton::clicked, this, &project01::StudentBackToPortal);
    connect(ui.StudentPortalbackB_2, &QPushButton::clicked, this, &project01::BackToStart);
    
 
}

project01::~project01()
{
}

void project01::AdminStart()
{
    ui.stackedWidget->setCurrentIndex(1);
}
void project01::AdminSignIN()
{
    ui.stackedWidget->setCurrentIndex(2);
}
void project01::AdminSignUp()
{
    ui.stackedWidget->setCurrentIndex(3);
}
void project01::AdminBackToPortal()
{
    ui.stackedWidget->setCurrentIndex(1);
}
void project01::BackToStart()
{
    ui.stackedWidget->setCurrentIndex(0);
}
void project01::StudentStart()
{
    ui.stackedWidget->setCurrentIndex(4);
}
void project01::SudentSignIN()
{
    ui.stackedWidget->setCurrentIndex(5);
}
void project01::StudentSignUp()
{
    ui.stackedWidget->setCurrentIndex(6);
}
void project01::StudentBackToPortal()
{
    ui.stackedWidget->setCurrentIndex(4);
}
