#include <iostream>
#include "Burrito.h"

using namespace std;

int main(){
   
   int age;
   int agetotoal = 0;
   int numberofpeople = 0;

   cout << "Enter first person age or -1 to quit"<< endl;
   cin >> age;

   while(age!= -1){
    agetotoal = agetotoal+ age;
    numberofpeople ++;

     cout << "Enter first person age or -1 to quit"<< endl;
   cin >> age;


   }
   cout << "number of poople entered:" << numberofpeople<< endl;
   cout << "average age : " << agetotoal/numberofpeople << endl;

    return 0;
}