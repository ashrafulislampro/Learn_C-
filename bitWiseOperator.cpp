#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a = 32;

    int b = 12;

    int c = a & b;  
    int d = a | b;
    int e = a ^ b;
    int l = a << 3;  // multiple 3 times a value with 2
    int r = a >> 3; //  divide 3 times a value with 2

        
    cout << "Bitwise AND : " << c <<endl;   
    cout << "Bitwise OR : " << d <<endl;     
    cout << "Bitwise EXOR : " << e <<endl; 
    cout << "Bitwise Shift Right : " << r <<endl; 
    cout << "Bitwise Shift Left : " << l <<endl; 

    getchar();
}