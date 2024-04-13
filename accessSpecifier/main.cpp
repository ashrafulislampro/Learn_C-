#include <iostream>

using namespace std;

class Mother{
    public:
        void sayHi(){
            cout << var;
        }
    private:
        int var = 0;
    protected:
        int someVar = 0;
};

class Daughter:public Mother{
    public:
        void display(){
           someVar = 50;
           cout << "protected value = " << someVar << endl;
        }
};



int main(){
    Daughter obj;
    obj.display();
    return 0;
}