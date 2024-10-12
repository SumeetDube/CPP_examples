#include <iostream>
// for very complex if statements

using namespace std;

int main()
{
    int age = 18;

    switch (age)
    {
    case 16:
        cout << "hey you can drive nwo  !\n";
        break;
    case 18:
        cout << "Get out of the house\n";
        break;
    case 21:
        cout << "Get married asshole \n";
        break;
    default:
        cout << "Sorry you did nothing \n";
    }

    return 0;
}