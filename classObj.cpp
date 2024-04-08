#include <iostream>
#include <string>

using namespace std;

class MyClass
{
public:
    int id;
    string name;

    void display()
    {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main()
{
    MyClass myobj;
    myobj.id = 42;
    myobj.name = "Ashraful";
    myobj.display();
    return 0;
}