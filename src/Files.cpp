#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckFiles;
    buckFiles.open("fish.txt");

    buckFiles << " I love tun and tuna loves me \n`";

    buckFiles.close();

}