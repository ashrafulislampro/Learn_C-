#include <iostream>
#include <cstdio>

using namespace std;

class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl; // Corrected typo here
    }
};

class Student : public Person // Corrected inheritance
{
public:
    int id;
    void display2()
    {
        cout << "Student Id = " << id << endl;
        display();
    }
};

int main()
{
    Student ob;
    ob.id = 101;
    ob.age = 24;          // Accessing inherited member variable
    ob.name = "Ashraful"; // Accessing inherited member variable

    ob.display2();

    getchar();
}
