#include <iostream>
#include <string>
using namespace std;
// using objects of other class in class
class Birthday
{
public:
    Birthday(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void printdate()
    {
        cout << month << '/' << day << '/' << year << endl;
    }

private:
    int day;
    int month;
    int year;
};

class People
{
public:
    People(string x, Birthday dob)
        : name(x), dateOfBirth(dob)
    {
    }
    void printstuff()
    {
        cout << name << "was born on ";
        dateOfBirth.printdate();
    }

private:
    string name;
    Birthday dateOfBirth;
};

int main()
{

    Birthday bo(23, 12, 2003);

    People sumeet("sumeet", bo);
    bo.printdate();
    sumeet.printstuff();
}