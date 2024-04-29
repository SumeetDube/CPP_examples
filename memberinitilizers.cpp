#include <iostream>

using namespace std;

class Sally{
    
    public:
       Sally(int a, int b)
       :regvar(a), constvar(b)
       {

       }
        void print(){
            cout << "Regular valriable is " << regvar << endl;
            cout << "const varaible is " << constvar << endl;
        }
    private:
        int regvar;
        const int constvar;
};

int main(){

    Sally sal(3,43);
    sal.print();
}

// member initializer, setting your variables to values for const variables
//