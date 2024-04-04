#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
    char name[20];

    cout << "Enter your name : " << endl;
    fgets(name, sizeof(name), stdin);

    cout << "Welcome " << name << endl;
    getchar();
}
