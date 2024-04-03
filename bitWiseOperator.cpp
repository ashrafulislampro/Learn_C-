#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a = 32;

    int b = 12;

    int c = a & b;  
    int d = a | b;
    int e = a ^ b;

        
    cout << "Bitwise AND : " << c <<endl;   
    cout << "Bitwise OR : " << d <<endl;     
cout << "Bitwise EXOR : " << e <<endl;   

    getchar();
}