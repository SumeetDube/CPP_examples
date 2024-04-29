#include <iostream>
using namespace std;

int main (){

    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];



    cout << "bpo0 at " << bp0 << endl;
     cout << "bpo1 at " << bp1<< endl;
    cout << "bpo2 at " << bp2<< endl;

     bp0 += 1;
 cout << "bpo0 at " << bp0 << endl;
}

// Pointer Arithematic doesn't work like numerical mathematics.
// Instead of adding to the memorys address
// Pointers add to the element. ie, it changes the memroys addess to the address of the next reference 
//Example:
//bpo0 at 0x7ffcf257c760
//bpo1 at 0x7ffcf257c764
//bpo2 at 0x7ffcf257c768
//bpo0 at 0x7ffcf257c764
//