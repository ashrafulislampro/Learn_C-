#include <iostream>
#include "MyClass.h"

using namespace std;

MyClass::MyClass(int a):var(a){

};

void printInfo(int var){
    cout << var <<endl;
    // cout << this->var << endl;
    // cout << (*this).var << endl;
};
