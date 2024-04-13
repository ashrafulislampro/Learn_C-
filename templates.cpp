#include <iostream>

using namespace std;

template <class T>

T sum(T a, T b){
    return a + b;
}

int main(){
    double x = 5.5, y = 7.5;
    cout << sum(x, y)<<endl;
    return 0;
}