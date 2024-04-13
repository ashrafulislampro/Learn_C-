#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        int motherAge = 29;
        int sonAge = 36;
        if (sonAge > motherAge)
        {
            throw 505;
        }
    }
    catch (int x)
    {
        cout << x << " -Error" << endl;
    }

    return 0;
}