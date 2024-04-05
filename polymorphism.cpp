#include <iostream>
#include <cstdio>

using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout << "I am a person" << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I am a student" << endl;
    }
};

class Teacher : public Person
{
public:
    void display()
    {
        cout << "I am a Teacher" << endl;
    }
};

int main()
{

    Person *p;
    Teacher t;
    Student s;

    p = &s;
    p->display();

    p = &t;
    p->display();

    getchar();
}