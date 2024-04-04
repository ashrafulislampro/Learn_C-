#include <iostream>
#include <cstdio>

using namespace std;

class Student
{
public:
    int id;
    double gpa;
};

int main()
{
    Student Alim, Suparna;

    Alim.id = 101;
    Alim.gpa = 4.28;

    cout << "Alim Result is = " << Alim.gpa << " Id is = " << Alim.id << endl;

    Suparna.id = 102;
    Suparna.gpa = 4.82;

    cout << "Suparna Result is = " << Suparna.gpa << " Id is = " << Suparna.id << endl;

    getchar();
}