#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_project01.h"

class project01 : public QMainWindow
{
    Q_OBJECT

public:
    project01(QWidget *parent = nullptr);
    ~project01();

    void AdminStart();

    void AdminSignIN();

    void AdminSignUp();

    void AdminBackToPortal();

    void BackToStart();

    void StudentStart();

    void SudentSignIN();

    void StudentSignUp();

    void StudentBackToPortal();

    void StudentBackToStart();
   

private:
    Ui::project01Class ui;
};
