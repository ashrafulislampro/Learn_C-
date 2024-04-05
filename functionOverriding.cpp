#include <iostream>
#include <cstdio>

using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I am a Person" << endl;
    }
};

class Student : Person
{
public:
    void display()
    {
        cout << "I am a Student" << endl;
    }
};

class Teacher : Person
{
public:
    void display()
    {
        cout << "I am a Teacher" << endl;
    }
};

int main()
{

    Person ob;
    ob.display();

    Student ob1;
    ob1.display();

    Teacher ob2;
    ob2.display();

    getchar();
}