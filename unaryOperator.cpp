#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int x = 5;

    x+= 3; // unary plus 8
    cout << "unary plus : "<< x << endl; 
    x-=2; // unary minus 6
    cout << "unary minus : " << x << endl;
    int y = x--; // after decrement, postfix decrement 6 5
    cout << "after decrement : "<< y << endl;
    cout  << "after decrement : "<< x << endl;

 y = --x; // before decrement, postfix decrement 4 4
    cout << "before decrement : "<< y << endl;
    cout  << "before decrement : "<< x << endl;

y = x++; // after increment, postfix increment 4 5
cout << "after increment : "<< y << endl;
cout << "after increment : " << x << endl;

y = ++x; // before increment, postfix increment 6 6
cout << "before increment : "<< y << endl;
cout << "before increment : " << x << endl;


    getchar();
}