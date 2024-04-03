#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int num;

    cout<< "Enter a number : "<<endl;
    cin>> num;

if(num < 0){
    cout<< (-num) << endl;
}else{
    cout<< num << endl;
}


    getchar();
}