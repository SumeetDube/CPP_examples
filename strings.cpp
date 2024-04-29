#include <iostream>
#include <string>

using namespace std;

int main(){
    string bucky;
// cun >> bucky;
    getline(cin,bucky);

    cout << bucky << endl;
    string hampster;
    string s1("Hampster");
    string s2;
    string s3;

    s2 = s1;
    s3.assign(s1);

    cout << s1 << s2 << s3 << endl;


    // strings are arrays of characters

    string s4 = "configurations";
    cout  << s2.at(3);

    for(int x =0; x < s2.length();x++){
        cout << s4.at(x);
    }
}

// You read the data before white space

// All the string functions
//assign()
at()
substr()
swap()
find()
rfind()
erase()
repace()
insert()