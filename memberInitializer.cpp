#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass(int a, int b) : regVar(a), constVar(b)
    {
        // regVar = a;
        // constVar = b;
        cout << regVar << " " << constVar << endl;
    }

private:
    int regVar;
    const int constVar;
};

int main()
{
    MyClass obj(12, 34);

    return 0;
}