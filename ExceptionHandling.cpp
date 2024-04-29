#include <iostream>
using namespace std;

int main()
{
    try
    {
        int momage = 30;
        int sonsage = 24;

        if (sonsage > momage)
        {
            throw 99;
        }
    }
    catch (int e)
    {
        cout << "The son cannot be older than the mom. Error Code:" << e << endl;
    }
}