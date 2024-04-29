#include <iostream>

using namespace std;

//Same function, many different outcomes according to the class
class Enemy{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            attackPower = a;
        }
};

class Ninja:public Enemy
{
    public:
        void attack(){
            cout << "I am ninja, ninja chop -" << attackPower << endl;
        }
};

class Monster:public Enemy
{   public:
    void attack(){
        cout << "monster attack, -" << attackPower <<endl;
    }
};


int main(){
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;         //because ninja is of enemy type this is valid
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);
    n.attack();
    m.attack();
}