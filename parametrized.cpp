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
    };
    void setValue(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    Student Alim, Suparna;

    Alim.setValue(101, 3.50);
    Alim.display();

    Suparna.setValue(102, 4.50);
    Suparna.display();

    getchar();
}