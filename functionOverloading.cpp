#include <iostream>
#include <cstdio>

using namespace std;
void sum(int x, int y);
void sum(int x, int y, int z);

int main()
{

    sum(10, 40);
    sum(10, 60, 30);
    getchar();
}

void sum(int x, int y, int z)
{
    cout << "Sum is = " << x + y + z << endl;
}

void sum(int x, int y)
{
    cout << "Sum is = " << x + y << endl;
}