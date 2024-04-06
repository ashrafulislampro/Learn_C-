#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string line;

    ifstream file("student_details.txt");

    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}