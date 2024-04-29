#include <iostream>
using namespace std;

int main (){

int c;
char a; 
double d;

cout << sizeof(c) << endl;
cout << sizeof(a) << endl;
cout << sizeof(d) << endl;

int array[40];
cout << sizeof(array)/sizeof(array[0]);
}