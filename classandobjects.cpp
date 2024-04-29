#include <iostream>

// Basics of object oriented programming
using namespace std;

class SumeetsClass
{
public: // accesss specifier
    void saysomething()
    {
        cout << " Hi, my name is Sumeet.\n";
    }
};

int main()
{
    // objects
    SumeetsClass obj;
    obj.saysomething();
    return 0;
}
