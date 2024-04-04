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

    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    Student Alim(101, 3.50);

    Alim.display();

    Student Suparna(102, 4.50);
    Suparna.display();

    getchar();
}