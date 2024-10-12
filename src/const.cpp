#include <iostream>

using namespace std;

class Sally{
    
    public:
        void printshiz(){
            cout << "Print something" << endl;
        }
        void printshiz2() const{
            cout << "I am the const obj" << endl;

        }
};

int main (){
    const int x = 10;
    cout << x << endl;
    Sally sal;
    sal.printshiz();

    const Sally cobj;
    cobj.printshiz2();

}