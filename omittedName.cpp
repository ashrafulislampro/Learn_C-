#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 5;
    int y = 10;

    // x &= 3;
    // cout << "Result : "<< x <<endl;
    x |=3;
    y >>=3;
    // cout << "Result : "<< x << endl;
    // cout << "Result : "<< y << endl;
// cout << "abs : "<< abs(-6) << endl;
// cout << "acos : "<< acos(3) << endl;
// cout << "asin : "<< asin(60) << endl;
// cout << "atan : "<< atan(30) << endl;
// cout << "cbrt : "<< cbrt(3) << endl;
// cout << "ceil : "<< ceil(3.3) << endl;
// cout << "cos : "<< cos(30) << endl;
// cout << "cosh : "<< cosh(45) << endl;
// cout << "exp : "<< exp(3) << endl;
// cout << "expm1 : "<< expm1(1) << endl;
// cout << "fabs : "<< fabs(3.5454) << endl;
// cout << "fdim : "<< fdim(5, 6) << endl;
// cout << "floor : "<< floor(9.789) << endl;
// cout << "hypot : "<< hypot(5, 4) << endl;
// cout << "fma : "<< fma(3, 4, 5) << endl;
cout << "fmax : "<< fmax(3.56, 53.334) << endl;
cout << "fmin : "<< fmin(7.343, 2.453) << endl;
cout << "fmod : "<< fmod(9, 2) << endl;
cout << "pow : "<< pow(3, 2) << endl;
cout << "sin : "<< sin(45) << endl;
cout << "sinh : "<< sinh(30) << endl;
cout << "tan : "<< tan(45) << endl;
cout << "tanh : "<< tanh(35.5) << endl;
    return 0;
}