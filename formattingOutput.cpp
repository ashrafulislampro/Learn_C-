#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
    float num1, num2;

    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);
    float add = num1 + num2;
    cout <<setw(20) << add << endl;

    cout << noshowpoint;

    float sub = num1 - num2;
    cout <<setw(20)<< sub << endl;

    float mul = num1 * num2;
    cout <<setw(20)<< mul << endl;

    float div = num1 / num2;
    cout <<setw(20)<< div << endl;


    getchar();
}