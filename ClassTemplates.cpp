//Template: General data Type
using namespace std;
#include<iostream>

template <class T>
class Bucky{
    T first, second;
    public:
        Bucky(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
};

template <class T>
T Bucky<T> :: bigger(){
    return (first>second?first:second);
}

int main(){
    Bucky<int > bo(69,105);
    cout << bo.bigger();
}