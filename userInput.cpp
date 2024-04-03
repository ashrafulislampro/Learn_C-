#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num;
    float num2;
    char ch;
    
    char name[20];

    cout<< "Enter an user info : "<<endl;
    cin >> num >> num2 >> ch >> name;

    cout<< "User info is : "<< num<< endl << num2<< endl << ch << endl<< name << endl;

    cout << "My name is : " <<name << endl;
    getchar();
}