#include <iostream>
#include <string>
using namespace std;
// does something different when passed a specific type of data

template<class T>
class Spunky{
    public:
        Spunky(T x){
            cout << x << " is not a character!!" << endl;
        }
};

template<>
class Spunky<char>{
    public:
        Spunky(char x){
            cout << x << "is a indeed a character !"<< endl;

        }
};
int main(){
    Spunky<int> obj1(7);
    Spunky<double> obj2(3.22);
    Spunky<char> obj3('Q');
}