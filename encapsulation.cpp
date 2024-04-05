#include <iostream>
#include <cstdio>

using namespace std;

class Student
{
private:
    int id;
    string name;

public:
    void setName(string x, int y)
    {
        id = y;
        name = x;
    };
    int getName()
    {
        cout << "Student Id : " << id << endl;
        cout << "Student Name : " << name << endl;

        return name, id;
    }
};

int main()
{
    Student ob;
    ob.setName("Ashraful", 101);
    ob.getName();
    getchar();
}