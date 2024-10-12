#include <iostream>
using namespace std;

class Sally
{
public:
    Sally()
    {
        cout << "I m the constuctor" << endl;
    }

    ~Sally()
    {
        cout << "Im the deconstructor" << endl;
    }
};

int main()
{

    Sally sam;
}