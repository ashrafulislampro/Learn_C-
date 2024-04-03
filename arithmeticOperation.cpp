#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num1, num2;
    num1 = 33564;
    num2 = 10;

// addition two numbers
    int sum = num1 + num2;
    cout << "Sum is = " << sum << endl;

// substraction between two numbers
 int sub = num1 - num2;
 cout << "Subraction is = " << sub << endl;

//  division between two numbers
double div = (float) num1 / num2;
cout << "Division is = " << div << endl;

//  remainder between two numbers
int rem = num1 % num2;
cout << "Remainder is = " << rem << endl;


    getchar();
}