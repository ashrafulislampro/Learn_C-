#include <iostream>
#include "myfirstclass.h"
using namespace std;

MyFirstClass::MyFirstClass()
{

    cout << "Inside the constructor" << endl;
}

MyFirstClass::~MyFirstClass()
{
    cout << "Destructor is called" << endl;
}

void MyFirstClass::display()
{
    cout << "Inside the display function" << endl;
}