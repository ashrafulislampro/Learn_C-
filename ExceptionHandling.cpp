#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    while (1)
    {
        try
        {
            int num1, num2;

            cout << "Enter Two Number = " << endl;
            cin >> num1 >> num2;

            if (num2 == 0)
            {
                throw -1;
            }
            double result = (double)num1 / num2;
            cout << "Result is = " << result << endl;
        }
        catch (int x)
        {
            cout << "Divide by Zero is not possible" << endl;
            cout << "Please try again!" << endl;
        }
    }

    getchar();
}