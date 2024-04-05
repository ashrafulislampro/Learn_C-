#include <iostream>
#include <cstdio>

using namespace std;

class Student
{
public:
    const int admissionFee;
    const int examFee;
    int id;

    Student(int x, int y, int z)
        : admissionFee(x), examFee(y)
    {
        id = z;
        cout << "ID = " << id << endl;
        cout << "Admission Fee = " << admissionFee << endl;
        cout << "Exam Fee = " << examFee << endl;
    }
};

int main()
{
    Student s1(16000, 1200, 101);
    getchar();
}
