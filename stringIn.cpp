#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char name[20];
    char name2[] = "Ashraful Islam ";
    char name3[20];
    char name4[20];
    char name5[20];
    char name6[] = "Ashraful";
    char name7[] = "Ashraful";

    cout << "Enter your name : " << endl;
    fgets(name, sizeof(name), stdin);
    cout << "Welcome to " << name << endl;

    int len = strlen(name2);
    strcpy(name3, name);
    strcat(name2, name);

    for (int i = 0; name2[i]; i++)
    {
        name4[i] = toupper(name2[i]);
        name5[i] = tolower(name2[i]);
    }
    int stc = strcmp(name6, name7);

    // strlwr(name2);
    cout << "String Length = " << len << endl;
    cout << "String Copy = " << name3 << endl;
    cout << "String Concat = " << name2 << endl;
    cout << "String Uppercase = " << name4 << endl;
    cout << "String Lowercase = " << name5 << endl;

    if (stc == 0)
    {
        cout << "String Compare is matched = " << stc << endl;
    }
    else
    {
        cout << "String is not matched = " << stc << endl;
    }

    getchar();
}
