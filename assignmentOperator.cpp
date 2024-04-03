#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int x = 5;

    x+= 2; // additional assignment 7
    cout << "Additional Assignment : " << x << endl;
   
    x-=3; // subtraction assignment 4
    cout << "Substraction Assignment : " << x << endl;
    
    x /= 2; // division assignment 2
    cout << "Division Assignment : "<< x << endl;

    x *= 2; // multiplication assignment 4
    cout << "Multiplication Assignment : " << x << endl;

    x %= 3; // remainder assignment 1
    cout << "Remainder Assignment : " << x << endl;

    
    getchar();
}