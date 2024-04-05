#include <iostream>
#include <cstdio>

using namespace std;

class Student
{
public:
    string name;

    Student(string name)
    {
        this->name = name;
    }

    void display()
    {
        cout << "Student Name is = " << name << endl;
    }
};

int main()
{
    Student s1("Ashraful");

    s1.display();

    getchar();
}