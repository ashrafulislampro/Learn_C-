#include <iostream>

using namespace std;

class MyClass
{
public:
    string brand;
    string model;
    int year;
    MyClass(string x, string y, int z);
};

MyClass::MyClass(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    MyClass carObj1("BMW", "X5", 1999);
    MyClass carObj2("Ford", "Mustang", 1969);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}