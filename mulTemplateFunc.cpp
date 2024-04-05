#include <iostream>
#include <cstdio>

using namespace std;

template <class myTemplate1, class myTemplate2>

myTemplate1 add(myTemplate1 a, myTemplate2 b)
{
    return a + b;
};

int main()
{
    cout << add(10, 30) << endl;
    cout << add(3.5, 7) << endl;

    getchar();
}