#include <iostream>

using namespace std;
//getters and setters 
class Nme{
    public:
        void setName(string x){
            name = x;
        }
        string getname(){
            return name;
        }
    private:
    string name;

};

int main(){
    Nme myname;
    myname.setName("Sumeet");

    cout << myname.getname() << endl;
    return 0;
}