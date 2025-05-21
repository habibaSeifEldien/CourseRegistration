#include "project01.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    files file;
    file.loadAdminsFromCSV();
    file.loadCourses();
    file.loadStudents();
    file.loadGradesForStudent();
    QApplication a(argc, argv);
    project01 w;
    w.show();
    return a.exec();
    file.saveStudents();
    file.saveGradesToFile();
    file.saveCoursesToFile();
}