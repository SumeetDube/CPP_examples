#include <iostream>

using namespace std;
// adding parameters to constructters.
//  classes are templates for defining and initializing objectes
class Nme
{
public:
    Nme(string z)
    {
        cout << "This will get printed as the construdtor is ccreaeted\n";
        setName(z);
    }
    void setName(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Nme myname("Sayali");
    cout << myname.getname() << endl;

    myname.setName("Sumeet");

    cout << myname.getname() << endl;
    return 0;
}