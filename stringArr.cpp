#include <iostream>
#include <string>
using namespace std;

int main()
{
    string car[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int len = size(car);
    for (int i = 0; i < len; i++)
    {
        cout << "Serial No : " << i << " Car = " << car[i] << endl;
    }
    return 0;
}