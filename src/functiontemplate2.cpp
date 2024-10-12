#include <iostream>
using namespace std;

template<class FIRST , class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return (a<b?a:b);
}

int main(){
    int x = 77;
    double y = 56.78;
    cout << smaller(x,y) << endl;
}