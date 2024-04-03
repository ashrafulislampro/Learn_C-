#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    double base, height,radius, area;

    cout << "Enter a base number : " << endl;
    cin >> base;

    cout << "Enter height : " << endl;
    cin >> height;

    cout << "Enter radius : " << endl;
    cin >> radius;

    area = base * height;
    cout << "Rectangle Area is : " << area << endl;

    area = 3.1416 * radius * radius;
    cout << "Circle Area is : "<< area << endl;


    
    getchar();
}