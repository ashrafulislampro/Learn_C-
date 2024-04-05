#include "myclassdemo.h"
#include <iostream>

using namespace std;

void MyClassDemo ::display() const
{
    cout << "I am a constant function" << endl;
}

void MyClassDemo ::display2()
{
    cout << "I am a non-constant function" << endl;
}