#include <iostream>
#include "Burrito.h"

using namespace std;

int volume(int l = 1, int w =1 , int h =3);


int main(){
  
cout << volume() << endl;
    return 0;
}

int volume(int l, int w, int h){
    return l*w*h;
}
