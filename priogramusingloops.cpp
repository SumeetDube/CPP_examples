#include <iostream>
#include "Burrito.h"

using namespace std;

int main(){
   int x= 0;
   int total;
   int number;

   while(x < 5){
    cin >> number;
    total += number;
    x ++;
   }
   cout << total << endl;
    return 0;
}