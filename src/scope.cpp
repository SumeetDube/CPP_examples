#include<iostream>

using namespace std;
//where you carete variables, defines where you can use them
int tuna = 40;


int main(){
   double tuna = 69; // local variables get the preference
   cout << tuna <<endl;
    cout << ::tuna << endl; // global gets the preference
}