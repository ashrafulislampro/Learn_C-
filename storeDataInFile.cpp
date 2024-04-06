#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string name;
    int age;
    ofstream file;
    file.open("student_details.txt", ios::out | ios::app);

    for (int i = 1; i <= 3; i++)
    {

        cout << "Enter Your Name : " << endl;
        getline(cin, name);
        cout << "Enter age : " << endl;
        cin >> age;

        file << name << "\t" << age << endl;
        cin.ignore();
    }
    file.close();
    getchar();
}