#include <iostream>
using namespace std;
#include "Hannah.h"


Hannah::Hannah(int num)
:h(num)
{

}
void Hannah::printCrap(){
    cout << "h = " << h<<endl;
    cout << "this ->" << this->h << endl; // It stores the memory address of the current class object
    cout << "(*this ->).h" << (*this).h << endl; // Dereferencing
    cout << "" << endl;
}
