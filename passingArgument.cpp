#include <iostream>
#include <cstdio>

using namespace std;

void display(int num)
{
    num = 20;
}

void displays(int *num)
{
    *num = 50;
}

int main()
{
    int x = 10;
    cout << "Before calling function value of x = " << x << endl;

    // passing by value
    display(x);
    cout << "After calling function value of x = " << x << endl;

    // passing by reference
    displays(&x);
    cout << "After calling function value of x = " << x << endl;

    getchar();
}