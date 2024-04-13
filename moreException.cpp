#include <iostream>

using namespace std;

int main()
{
    try
    {
        int num1;
        cout << "Enter the first number : " << endl;
        cin >> num1;

        int num2;
        cout << "Enter the second number : " << endl;
        cin >> num2;

        if (num2 == 0)
        {
            throw 500;
        }

        cout << "Result : " << num1 / num2;
    }
    catch (int x)
    {
        cout << "Divison by zero " << x << endl;
    }

    return 0;
}