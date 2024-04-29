#include <iostream>
#include <string>
using namespace std;

class StankFist{
    public:
    StankFist(){
        stinkVar = 0;
    }
    private:
    int stinkVar;

    friend void stinkysFriend(StankFist &sfo);

};

void stinkysFriend(StankFist &sfo){
    sfo.stinkVar  = 99;
    cout << sfo.stinkVar << endl;

}

int main (){
    StankFist bob;
    stinkysFriend(bob);
}