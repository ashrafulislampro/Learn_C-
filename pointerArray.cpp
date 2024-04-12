#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p = arr;

    for (int i = 0; i < 8; i++)
    {
        cout << *p << endl;
        p++;
    }
    return 0;
}