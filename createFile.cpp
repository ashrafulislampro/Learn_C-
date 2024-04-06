#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("student.txt");
    file << "I am Ashraful Islam" << endl;
    file.close();

    getchar();
}