#include <iostream>
using namespace std;
// PASS BY REFERENCE and PASS BY REFEREMCE

// two ways of passing a vlaue : 1] Value- copy 2] Reference - memory address

void passByValue(int x ){
    x= 88;
}

void passByReference(int *q){
    *q = 66;
}




int main (){

int betty  =13;
int sandy = 43;

passByValue(betty);
passByReference(&sandy);

cout << betty << endl;
cout << sandy << endl;



}


