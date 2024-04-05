#include <iostream>
#include <cstdio>

using namespace std;

template <class myTemplate>

myTemplate add(myTemplate a, myTemplate b)
{
    return a + b;
};

int main()
{
    cout << add(10, 30) << endl;
    cout << add(3.5, 7.4) << endl;

    getchar();
}