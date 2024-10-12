#include <iostream>
using namespace std;

void printNumber(int x){
    cout << " I ma print an integer" << x << endl;

}
void printNumber(float y){
    cout << "Im print a float" << y << endl;
}

int main (){
    int a = 54;
    float b = 34.3432;
    printNumber(a);
    printNumber( b );
}
 // Make different functions for differernt data types
