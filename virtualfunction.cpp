#include <iostream>

using namespace std;

// Same function, many different outcomes according to the class

class Enemy
{
public:
    virtual void attack() = 0; // This is a pure virutal function
}; // ABSTRACT CLASS IS A CLASS WITH A PURE VIRUTAL FUNCTION IN IT.

class Ninja : public Enemy
{
public:
    void attack()
    {
        cout << "Ninja attack \n";
    }
};

class Monster : public Enemy
{
public:
    void attack()
    {
        cout << "Monster attack \n";
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
}