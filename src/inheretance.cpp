//inhrt members from another class in your class

#include <iostream>
using namespace std;
#include "src/Mother.h"
#include "src/Daughter.h"

int main (){
    Mother mom;
    mom.sayName();

    Daughter sayali;
    sayali.sayName();
}