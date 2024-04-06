#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main()
{
    string name;
    ofstream file;
    file.open("demoText.txt", ios::out | ios::app);

    cout << "Enter your name : " << endl;
    getline(cin, name);

    file << name << endl;

    file.close();
    cout << "Data is stored in " << endl;

    getchar();
}
