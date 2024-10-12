#include <iostream>
#include "Burrito.h"

using namespace std;

int main()
{
    int age = 120;
    if (age > 60)
    {
        cout << "wow you are old \n";
        if (age > 100)
        {
            cout << " Why are you still alive ? \n";
        }
    }
    else
    {
        cout << "You are young, get a job\n";
    }
    return 0;
}