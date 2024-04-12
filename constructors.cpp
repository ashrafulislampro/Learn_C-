#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Hello Constructor" << endl;
    }
};

int main()
{
    MyClass myObj;
    return 0;
}