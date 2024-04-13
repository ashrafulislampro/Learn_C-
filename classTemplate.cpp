#include <iostream>

using namespace std;

template <class T>

class Pair{
    private:
        T first, second;
    public:
        Pair(T a, T b):first(a), second(b){
            
        }
        T bigger();
};

template <class T>
T Pair<T>::bigger(){
    return (first > second ? first : second);
};

Pair<int> obj(11, 22);
    // cout << obj.bigger();

    Pair<double> obj(23.43, 5.68);
    // cout << obj.bigger();


int main(){
    

    return 0;
}