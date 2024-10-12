#include <iostream>
#include "Sally.h"
using namespace std;

int main(){
    Sally a(32);
    Sally b{21};
    Sally c;

    c = a +b ;
    cout << c.num << endl;
}

// Fancing way of adding class object variables
