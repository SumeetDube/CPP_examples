#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckFiles("fish.txt");
    buckFiles << "This is sumeet " << endl;

    if (buckFiles.is_open()){
        cout << "ok this file is open\n";

    }else{
        cout << "This file is not open"<< endl;

    }
    buckFiles.close();
}