#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile;
    MyFile.open("test.txt");

    if (MyFile.is_open())
    {
        MyFile << "this is awesome ! \n";
    }
    else
    {
        cout << "Something went wrong" << endl;
    }

    MyFile.close();
    return 0;
}