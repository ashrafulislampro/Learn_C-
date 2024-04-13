#include <iostream>

using namespace std;

class Mother{
    public:
        Mother(){
            cout << "Mother Constructor"<<endl;
        }
        ~Mother(){
            cout << "Mother Destructor"<< endl;
        }
};

class Daughter:public Mother{
    public:
        Daughter(){
            cout << "Daughter Constructor"<<endl;
        }
        ~Daughter(){
            cout << "Daughter Destructor"<< endl;
        }
};

int main(){
    Daughter m;
    return 0;
}