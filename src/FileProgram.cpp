#include <iostream>
#include <fstream>

using namespace std;

int getWhatTheyWant();

void displayItems(int x);

int main()
{
    int whatTheyWant;
    whatTheyWant = getWhatTheyWant();
    while (whatTheyWant < 4)
    {
        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        }
        whatTheyWant = getWhatTheyWant();
    }
}

int getWhatTheyWant()
{
    int choice;
    cout << "Choose a number from 1 to 3 or press 4 to quit \n" << endl;
    cin >> choice;
    return choice;
}

void displayItems(int x)
{
    ifstream objectFile("objects.txt");
    string name;
    double power;

    if (x == 1)
    {
        while (objectFile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << " " << power << " " << endl;
            }
        }
    }

    if (x == 2)
    {
        while (objectFile >> name >> power)
        {
            if (power >= 0)
            {
                cout << name << " " << power  << " " << endl;
            }
        }
    }
    if (x == 3)
    {
        while (objectFile >> name >> power)
        {
            if (  power < 0)
            {
                cout << name << " " << power << " " << endl;
            }
        }
    }
}