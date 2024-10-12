#include <iostream>
#include <string>

using namespace std;

int main(){
    string a1("Hi my name is summeet . and I hove somethjing ");
    cout << a1 << endl;
    a1.erase(20);
    cout << a1 << endl;

    a1.replace(14,5,"This is the replacement text");
    cout << a1 << endl;

    a1.insert(14,"This is the insert text");
    cout << a1 << endl;
}

