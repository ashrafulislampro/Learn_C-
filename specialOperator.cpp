#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    // comma (,)
    // sizeof()
    // pointer(*)
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    cout << sizeof(a) << " " << sizeof(f) << " " << sizeof(d) << " " << sizeof(ch) << " " << sizeof(name) << endl;

    int sum, x, y; 
    
    sum = (x = 20, y = 30, sum=x + y);

    cout<<sum << endl;

    getchar();
}