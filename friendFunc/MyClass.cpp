#include <iostream>
#include "MyClass.h"

using namespace std;


MyClass::MyClass(){
    regVar = 0;
};

void someFunc(MyClass &obj){
    obj.regVar = 45;
    cout << obj.regVar << endl;
}