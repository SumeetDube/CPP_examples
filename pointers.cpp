#include <iostream>
using namespace std;

int main()
{
    int fish = 5;
    cout << &fish << endl; // memory address of the variabvle

    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;
}

// Pointer: Special type of variable that stores a Memory Address
