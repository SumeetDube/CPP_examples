#include <iostream>
using namespace std;
void printarray(int array[] , int size);


int main(){
    int sally [2][3] = {
        {2,3,2}, {8,6,5}
    };
    for (int i = 0; i < size(sally); i++)
    {
        for (int p = 0; p < size(sally[i]); p++)
        {
            cout << sally[i][p] << endl;
           
        }
        
    }
    
}