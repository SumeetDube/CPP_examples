#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream theFile("players.txt");
    cout << "Enter players Id, name,and money\n";
    cout << "Press cntrol +z to quite \n";

    int id;
    string name;
    double money;
    while (cin >> id >> name >> money)
    {
        theFile << id << " " << name << " " << money << endl;
    }
    theFile.close();
}