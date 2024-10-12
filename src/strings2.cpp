#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1("Om i think I am god The great  and almghty of all time. Who had the divie and light of the good ");
    cout << s1.substr(5,7);
 
    string s2 ("Apple");
    cout << s2 << endl;
    s1.swap((s2));
    cout << s1 << s2 << endl;
    // chreating smaller string from a bigger string
}