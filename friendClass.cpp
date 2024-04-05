#include <iostream>
#include <cstdio>

using namespace std;

class A
{
private:
    int id = 101;
    string name = "Ashraful Islam";

public:
    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "Id = " << obj.id << " Name = " << obj.name << endl;
    }
};

int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);

    getchar();
}