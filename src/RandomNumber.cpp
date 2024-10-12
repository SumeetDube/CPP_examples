#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

    srand(time(0)); // seed random number


    for(int x =1; x < 25; x++){
cout << 1+(rand()%6) << endl;
    }
    cout << time(0) ;
    return 0;
}