#include <iostream>
using namespace std;

//template defination is build the genertic type of data;
//template is identifying the datttype and substituing it in place of the genertic data type speciified.
// Used to make same code work for different data, types

template < class bucky>
bucky addCrap(bucky a, bucky b){
    return a+b;
}

int main(){
    int x =7 , y =43, z;
    z= addCrap(x,y);
    cout << z<<endl;
}