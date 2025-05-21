/********************************************************************************
** Form generated from reading UI file 'project01.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT01_H
#define UI_PROJECT01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_project01Class
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QLabel *label;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *AdminB;
    QPushButton *StudentB;
    QWidget *page_2;
    QFrame *frame_3;
    QLabel *label_6;
    QPushButton *AdminPortalbackB;
    QFrame *frame_4;
    QLabel *label_7;
    QPushButton *AdminSigninB;
    QPushButton *AdminSignUpB;
    QLabel *label_5;
    QWidget *page_3;
    QFrame *frame_5;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *frame_6;
    QLabel *label_10;
    QLineEdit *AdminName;
    QLineEdit *AdminPass;
    QPushButton *pushButton;
    QPushButton *AdminSigninbackB;
    QWidget *page_4;
    QFrame *frame_7;
    QLabel *label_12;
    QLineEdit *AdminName_2;
    QLineEdit *AdminPass_2;
    QPushButton *AdminSignUpconB;
    QLineEdit *AdminPass_3;
    QLineEdit *AdminPass_4;
    QPushButton *AdminSignupbackB;
    QFrame *frame_8;
    QLabel *label_13;
    QLabel *label_11;
    QWidget *page_5;
    QFrame *frame_10;
    QLabel *label_15;
    QPushButton *StudentSigninB;
    QPushButton *StudentSignUpB;
    QLabel *label_16;
    QFrame *frame_9;
    QLabel *label_14;
    QPushButton *StudentPortalbackB_2;
    QWidget *page_6;
    QFrame *frame_11;
    QLabel *label_18;
    QLabel *label_17;
    QFrame *frame_12;
    QLabel *label_19;
    QLineEdit *StudentName;
    QLineEdit *StudentPass;
    QPushButton *StudentSignIncon;
    QPushButton *StudentSigninbackB_2;
    QWidget *page_7;
    QFrame *frame_14;
    QLabel *label_22;
    QLineEdit *studUPname;
    QLineEdit *studUPpass;
    QPushButton *StudentSignUpconB_2;
    QLineEdit *studUPemail;
    QLineEdit *studUPNationalid;
    QPushButton *StudentSignupbackB;
    QCheckBox *male;
    QCheckBox *female;
    QDateEdit *studDate;
    QLineEdit *studUPid_2;
    QLineEdit *studUPidPhone;
    QLineEdit *studUPid_3;
    QFrame *frame_13;
    QLabel *label_20;
    QLabel *label_21;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *project01Class)
    {
        if (project01Class->objectName().isEmpty())
            project01Class->setObjectName("project01Class");
        project01Class->resize(868, 563);
        centralWidget = new QWidget(project01Class);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-41, -61, 921, 591));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        label = new QLabel(page_1);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 80, 401, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/welcome/Onboarding-cuate (1).png")));
        label->setScaledContents(true);
        frame = new QFrame(page_1);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(39, 59, 471, 511));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(page_1);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(500, 60, 471, 511));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 120, 141, 81));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 170, 251, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 24pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 20, 61, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_4->setScaledContents(true);
        AdminB = new QPushButton(frame_2);
        AdminB->setObjectName("AdminB");
        AdminB->setGeometry(QRect(60, 240, 221, 41));
        AdminB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(70, 92, 144);\n"
"font: 700 12pt \"Segoe UI\";"));
        StudentB = new QPushButton(frame_2);
        StudentB->setObjectName("StudentB");
        StudentB->setGeometry(QRect(60, 290, 221, 41));
        StudentB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(70, 92, 144);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_3->raise();
        label_2->raise();
        label_4->raise();
        AdminB->raise();
        StudentB->raise();
        stackedWidget->addWidget(page_1);
        frame->raise();
        label->raise();
        frame_2->raise();
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(40, 60, 471, 511));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 20, 351, 431));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Privacy policy-rafiki.png")));
        label_6->setScaledContents(true);
        AdminPortalbackB = new QPushButton(frame_3);
        AdminPortalbackB->setObjectName("AdminPortalbackB");
        AdminPortalbackB->setGeometry(QRect(20, 20, 101, 31));
        AdminPortalbackB->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(177, 177, 177);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        frame_4 = new QFrame(page_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(440, 60, 471, 511));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(frame_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 20, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_7->setScaledContents(true);
        AdminSigninB = new QPushButton(frame_4);
        AdminSigninB->setObjectName("AdminSigninB");
        AdminSigninB->setGeometry(QRect(30, 240, 161, 41));
        AdminSigninB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(70, 92, 144);\n"
"font: 700 12pt \"Segoe UI\";"));
        AdminSignUpB = new QPushButton(frame_4);
        AdminSignUpB->setObjectName("AdminSignUpB");
        AdminSignUpB->setGeometry(QRect(200, 240, 141, 41));
        AdminSignUpB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(70, 92, 144);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 150, 311, 81));
        label_5->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(440, 60, 471, 511));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(90, 20, 351, 451));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/project01/Secure login-rafiki.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(frame_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(400, 10, 61, 61));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_9->setScaledContents(true);
        frame_6 = new QFrame(page_3);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(30, 60, 471, 511));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        label_10 = new QLabel(frame_6);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 150, 311, 81));
        label_10->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        AdminName = new QLineEdit(frame_6);
        AdminName->setObjectName("AdminName");
        AdminName->setGeometry(QRect(40, 220, 281, 31));
        AdminName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        AdminName->setFrame(true);
        AdminName->setEchoMode(QLineEdit::EchoMode::Normal);
        AdminName->setReadOnly(false);
        AdminPass = new QLineEdit(frame_6);
        AdminPass->setObjectName("AdminPass");
        AdminPass->setGeometry(QRect(40, 260, 281, 31));
        AdminPass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        AdminPass->setEchoMode(QLineEdit::EchoMode::Password);
        AdminPass->setReadOnly(false);
        pushButton = new QPushButton(frame_6);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 310, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        AdminSigninbackB = new QPushButton(frame_6);
        AdminSigninbackB->setObjectName("AdminSigninbackB");
        AdminSigninbackB->setGeometry(QRect(30, 20, 101, 31));
        AdminSigninbackB->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        frame_7 = new QFrame(page_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(40, 50, 471, 511));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        label_12 = new QLabel(frame_7);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 130, 311, 81));
        label_12->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        AdminName_2 = new QLineEdit(frame_7);
        AdminName_2->setObjectName("AdminName_2");
        AdminName_2->setGeometry(QRect(40, 200, 281, 31));
        AdminName_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        AdminName_2->setFrame(true);
        AdminName_2->setEchoMode(QLineEdit::EchoMode::Normal);
        AdminName_2->setReadOnly(false);
        AdminPass_2 = new QLineEdit(frame_7);
        AdminPass_2->setObjectName("AdminPass_2");
        AdminPass_2->setGeometry(QRect(40, 320, 281, 31));
        AdminPass_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        AdminPass_2->setEchoMode(QLineEdit::EchoMode::Password);
        AdminPass_2->setReadOnly(false);
        AdminSignUpconB = new QPushButton(frame_7);
        AdminSignUpconB->setObjectName("AdminSignUpconB");
        AdminSignUpconB->setGeometry(QRect(130, 370, 101, 31));
        AdminSignUpconB->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        AdminPass_3 = new QLineEdit(frame_7);
        AdminPass_3->setObjectName("AdminPass_3");
        AdminPass_3->setGeometry(QRect(40, 240, 281, 31));
        AdminPass_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        AdminPass_3->setEchoMode(QLineEdit::EchoMode::Normal);
        AdminPass_3->setReadOnly(false);
        AdminPass_4 = new QLineEdit(frame_7);
        AdminPass_4->setObjectName("AdminPass_4");
        AdminPass_4->setGeometry(QRect(40, 280, 281, 31));
        AdminPass_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        AdminPass_4->setEchoMode(QLineEdit::EchoMode::Normal);
        AdminPass_4->setReadOnly(false);
        AdminSignupbackB = new QPushButton(frame_7);
        AdminSignupbackB->setObjectName("AdminSignupbackB");
        AdminSignupbackB->setGeometry(QRect(30, 20, 101, 31));
        AdminSignupbackB->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        frame_8 = new QFrame(page_4);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(440, 60, 471, 511));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        label_13 = new QLabel(frame_8);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 40, 391, 411));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/project01/Sign up-cuate.png")));
        label_13->setScaledContents(true);
        label_11 = new QLabel(frame_8);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(390, 10, 61, 61));
        label_11->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_11->setScaledContents(true);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        frame_10 = new QFrame(page_5);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(440, 60, 471, 511));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(frame_10);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(330, 20, 61, 61));
        label_15->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_15->setScaledContents(true);
        StudentSigninB = new QPushButton(frame_10);
        StudentSigninB->setObjectName("StudentSigninB");
        StudentSigninB->setGeometry(QRect(30, 240, 161, 41));
        StudentSigninB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(70, 92, 144);\n"
"font: 700 12pt \"Segoe UI\";"));
        StudentSignUpB = new QPushButton(frame_10);
        StudentSignUpB->setObjectName("StudentSignUpB");
        StudentSignUpB->setGeometry(QRect(200, 240, 141, 41));
        StudentSignUpB->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(70, 92, 144);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_16 = new QLabel(frame_10);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(40, 150, 321, 81));
        label_16->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        frame_9 = new QFrame(page_5);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(40, 60, 471, 511));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        label_14 = new QLabel(frame_9);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 20, 351, 431));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Privacy policy-rafiki.png")));
        label_14->setScaledContents(true);
        StudentPortalbackB_2 = new QPushButton(frame_9);
        StudentPortalbackB_2->setObjectName("StudentPortalbackB_2");
        StudentPortalbackB_2->setGeometry(QRect(20, 20, 101, 31));
        StudentPortalbackB_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(177, 177, 177);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(page_5);
        frame_9->raise();
        frame_10->raise();
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        frame_11 = new QFrame(page_6);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(440, 60, 471, 511));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        label_18 = new QLabel(frame_11);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(400, 10, 61, 61));
        label_18->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_18->setScaledContents(true);
        label_17 = new QLabel(frame_11);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 60, 421, 421));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/project01/Mobile login-amico.png")));
        label_17->setScaledContents(true);
        label_17->raise();
        label_18->raise();
        frame_12 = new QFrame(page_6);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(20, 50, 471, 511));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        label_19 = new QLabel(frame_12);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(40, 150, 311, 81));
        label_19->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        StudentName = new QLineEdit(frame_12);
        StudentName->setObjectName("StudentName");
        StudentName->setGeometry(QRect(40, 220, 281, 31));
        StudentName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        StudentName->setFrame(true);
        StudentName->setEchoMode(QLineEdit::EchoMode::Normal);
        StudentName->setReadOnly(false);
        StudentPass = new QLineEdit(frame_12);
        StudentPass->setObjectName("StudentPass");
        StudentPass->setGeometry(QRect(40, 260, 281, 31));
        StudentPass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        StudentPass->setEchoMode(QLineEdit::EchoMode::Password);
        StudentPass->setReadOnly(false);
        StudentSignIncon = new QPushButton(frame_12);
        StudentSignIncon->setObjectName("StudentSignIncon");
        StudentSignIncon->setGeometry(QRect(130, 310, 101, 31));
        StudentSignIncon->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        StudentSigninbackB_2 = new QPushButton(frame_12);
        StudentSigninbackB_2->setObjectName("StudentSigninbackB_2");
        StudentSigninbackB_2->setGeometry(QRect(30, 20, 101, 31));
        StudentSigninbackB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        frame_14 = new QFrame(page_7);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(40, 50, 471, 511));
        frame_14->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        label_22 = new QLabel(frame_14);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(40, 60, 311, 81));
        label_22->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";\n"
"\n"
"color: rgb(70, 92, 144);"));
        studUPname = new QLineEdit(frame_14);
        studUPname->setObjectName("studUPname");
        studUPname->setGeometry(QRect(40, 120, 291, 31));
        studUPname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPname->setFrame(true);
        studUPname->setEchoMode(QLineEdit::EchoMode::Normal);
        studUPname->setReadOnly(false);
        studUPpass = new QLineEdit(frame_14);
        studUPpass->setObjectName("studUPpass");
        studUPpass->setGeometry(QRect(40, 350, 291, 31));
        studUPpass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPpass->setEchoMode(QLineEdit::EchoMode::Password);
        studUPpass->setReadOnly(false);
        StudentSignUpconB_2 = new QPushButton(frame_14);
        StudentSignUpconB_2->setObjectName("StudentSignUpconB_2");
        StudentSignUpconB_2->setGeometry(QRect(130, 390, 101, 31));
        StudentSignUpconB_2->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        studUPemail = new QLineEdit(frame_14);
        studUPemail->setObjectName("studUPemail");
        studUPemail->setGeometry(QRect(40, 160, 291, 31));
        studUPemail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPemail->setEchoMode(QLineEdit::EchoMode::Normal);
        studUPemail->setReadOnly(false);
        studUPNationalid = new QLineEdit(frame_14);
        studUPNationalid->setObjectName("studUPNationalid");
        studUPNationalid->setGeometry(QRect(40, 200, 291, 31));
        studUPNationalid->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPNationalid->setEchoMode(QLineEdit::EchoMode::Normal);
        studUPNationalid->setReadOnly(false);
        StudentSignupbackB = new QPushButton(frame_14);
        StudentSignupbackB->setObjectName("StudentSignupbackB");
        StudentSignupbackB->setGeometry(QRect(30, 20, 101, 31));
        StudentSignupbackB->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 92, 144);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Segoe UI\";"));
        male = new QCheckBox(frame_14);
        male->setObjectName("male");
        male->setGeometry(QRect(40, 320, 78, 20));
        male->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        female = new QCheckBox(frame_14);
        female->setObjectName("female");
        female->setGeometry(QRect(120, 320, 78, 20));
        female->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        studDate = new QDateEdit(frame_14);
        studDate->setObjectName("studDate");
        studDate->setGeometry(QRect(200, 320, 131, 23));
        studDate->setStyleSheet(QString::fromUtf8("color: rgb(70, 92, 144);\n"
"background-color: rgb(255, 255, 255);"));
        studUPid_2 = new QLineEdit(frame_14);
        studUPid_2->setObjectName("studUPid_2");
        studUPid_2->setGeometry(QRect(40, 240, 131, 31));
        studUPid_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPid_2->setEchoMode(QLineEdit::EchoMode::Normal);
        studUPid_2->setReadOnly(false);
        studUPidPhone = new QLineEdit(frame_14);
        studUPidPhone->setObjectName("studUPidPhone");
        studUPidPhone->setGeometry(QRect(180, 240, 151, 31));
        studUPidPhone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPidPhone->setEchoMode(QLineEdit::EchoMode::Normal);
        studUPidPhone->setReadOnly(false);
        studUPid_3 = new QLineEdit(frame_14);
        studUPid_3->setObjectName("studUPid_3");
        studUPid_3->setGeometry(QRect(40, 280, 291, 31));
        studUPid_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        studUPid_3->setEchoMode(QLineEdit::EchoMode::Normal);
        studUPid_3->setReadOnly(false);
        frame_13 = new QFrame(page_7);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(440, 60, 471, 511));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        label_20 = new QLabel(frame_13);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(30, 40, 391, 411));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/project01/Sign up-cuate.png")));
        label_20->setScaledContents(true);
        label_21 = new QLabel(frame_13);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(390, 10, 61, 61));
        label_21->setStyleSheet(QString::fromUtf8("font: 700 36pt \"Segoe UI\";\n"
"color: rgb(70, 92, 144);"));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/newPrefix/Screenshot_2025-05-15_005716-removebg-preview.png")));
        label_21->setScaledContents(true);
        stackedWidget->addWidget(page_7);
        project01Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(project01Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 868, 33));
        project01Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(project01Class);
        mainToolBar->setObjectName("mainToolBar");
        project01Class->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(project01Class);
        statusBar->setObjectName("statusBar");
        project01Class->setStatusBar(statusBar);

        retranslateUi(project01Class);

        QMetaObject::connectSlotsByName(project01Class);
    } // setupUi

    void retranslateUi(QMainWindow *project01Class)
    {
        project01Class->setWindowTitle(QCoreApplication::translate("project01Class", "project01", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("project01Class", "Hello,", nullptr));
        label_3->setText(QCoreApplication::translate("project01Class", "Welcome Back ", nullptr));
        label_4->setText(QString());
        AdminB->setText(QCoreApplication::translate("project01Class", "Admin", nullptr));
        StudentB->setText(QCoreApplication::translate("project01Class", "Student", nullptr));
        label_6->setText(QString());
        AdminPortalbackB->setText(QCoreApplication::translate("project01Class", "<-Back", nullptr));
        label_7->setText(QString());
        AdminSigninB->setText(QCoreApplication::translate("project01Class", "Signin", nullptr));
        AdminSignUpB->setText(QCoreApplication::translate("project01Class", "SignUp", nullptr));
        label_5->setText(QCoreApplication::translate("project01Class", "University Admin Portal", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("project01Class", "SIGNIN", nullptr));
        AdminName->setText(QString());
        AdminName->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your full name", nullptr));
        AdminPass->setText(QString());
        AdminPass->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your password", nullptr));
        pushButton->setText(QCoreApplication::translate("project01Class", "signin", nullptr));
        AdminSigninbackB->setText(QCoreApplication::translate("project01Class", "<-Back", nullptr));
        label_12->setText(QCoreApplication::translate("project01Class", "SIGNUP", nullptr));
        AdminName_2->setText(QString());
        AdminName_2->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your full name", nullptr));
        AdminPass_2->setText(QString());
        AdminPass_2->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your password", nullptr));
        AdminSignUpconB->setText(QCoreApplication::translate("project01Class", "signup", nullptr));
        AdminPass_3->setText(QString());
        AdminPass_3->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your E-mail", nullptr));
        AdminPass_4->setText(QString());
        AdminPass_4->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your National ID Number", nullptr));
        AdminSignupbackB->setText(QCoreApplication::translate("project01Class", "<-Back", nullptr));
        label_13->setText(QString());
        label_11->setText(QString());
        label_15->setText(QString());
        StudentSigninB->setText(QCoreApplication::translate("project01Class", "Signin", nullptr));
        StudentSignUpB->setText(QCoreApplication::translate("project01Class", "SignUp", nullptr));
        label_16->setText(QCoreApplication::translate("project01Class", "University Student Portal", nullptr));
        label_14->setText(QString());
        StudentPortalbackB_2->setText(QCoreApplication::translate("project01Class", "<-Back", nullptr));
        label_18->setText(QString());
        label_17->setText(QString());
        label_19->setText(QCoreApplication::translate("project01Class", "SIGNIN", nullptr));
        StudentName->setText(QString());
        StudentName->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your full name", nullptr));
        StudentPass->setText(QString());
        StudentPass->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your password", nullptr));
        StudentSignIncon->setText(QCoreApplication::translate("project01Class", "signin", nullptr));
        StudentSigninbackB_2->setText(QCoreApplication::translate("project01Class", "<-Back", nullptr));
        label_22->setText(QCoreApplication::translate("project01Class", "SIGNUP", nullptr));
        studUPname->setText(QString());
        studUPname->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your full name", nullptr));
        studUPpass->setText(QString());
        studUPpass->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your password", nullptr));
        StudentSignUpconB_2->setText(QCoreApplication::translate("project01Class", "signup", nullptr));
        studUPemail->setText(QString());
        studUPemail->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your E-mail", nullptr));
        studUPNationalid->setText(QString());
        studUPNationalid->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your National ID Number", nullptr));
        StudentSignupbackB->setText(QCoreApplication::translate("project01Class", "<-Back", nullptr));
        male->setText(QCoreApplication::translate("project01Class", "male", nullptr));
        female->setText(QCoreApplication::translate("project01Class", "female", nullptr));
        studUPid_2->setText(QString());
        studUPid_2->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your Nationality ", nullptr));
        studUPidPhone->setText(QString());
        studUPidPhone->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your Phone Number", nullptr));
        studUPid_3->setText(QString());
        studUPid_3->setPlaceholderText(QCoreApplication::translate("project01Class", "Enter your ID ", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class project01Class: public Ui_project01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT01_H
