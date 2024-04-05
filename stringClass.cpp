#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str1 = "Ashraful";
    string str2 = " Islam";
    string str3;

    str3 = str1;
    cout << "String 3 = " << str3 << endl;

    str3 = str1 + str2;
    cout << "String 3 = " << str3 << endl;

    int len = str1.length();
    cout << "String length = " << len << endl;
    getchar();
}
