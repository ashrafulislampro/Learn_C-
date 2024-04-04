#include <iostream>
#include <cstdio>

using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << " Id is = " << id << " Result is = " << gpa << endl;
    }
};

int main()
{
    Student Alim, Suparna;

    Alim.id = 101;
    Alim.gpa = 4.28;
    Alim.display();

    Suparna.id = 102;
    Suparna.gpa = 4.82;
    Suparna.display();

    getchar();
}