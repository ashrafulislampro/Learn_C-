#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int guessNum, randomNum;

    while (1)
    {
        cout << "Enter guess number 1 to 5 " << endl;
        cin >> guessNum;
        randomNum = rand() % 5 + 1;

        if (randomNum == guessNum)
        {
            cout << "You win the guessing number." << endl;
            cout << "Random number is = " << randomNum << endl;
        }
        else
        {
            cout << "You lose the guessing number." << endl;
            cout << "Random number is = " << randomNum << endl;
        }
    }

    getchar();
}