#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1("This is a string ham is spam of yes I am");
    cout << s1.find("am")<< endl;
    cout << s1.rfind("am ") << endl;
}

//gives index
