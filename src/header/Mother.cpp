
#include <iostream>
#include "Mother.h"
using namespace std; 

//base class

Mother::Mother(){
 cout << "i m the mother constructor\n";
}
void Mother::sayName(){
    cout << "I'm Dube" << endl;


}
Mother::~Mother(){
    cout << "Im the mohter deconstructor\n";
}