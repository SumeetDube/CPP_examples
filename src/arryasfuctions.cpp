#include <iostream>
using namespace std;
void printarray(int array[] , int size);


int main(){
int sumeet[3] = {23,34,243};
int prjawal[6] = {54,32,24,32,4,6};
printarray(sumeet,3);
printarray(prjawal,6);
}

void printarray(int array[] , int size){
for(int i= 0; i < size; i++){
    cout << array[i] <<endl;

}  
}
