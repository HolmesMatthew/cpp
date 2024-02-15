#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int count = 0;

    cout << "Enter the count: ";
    cin >> count;

    for (int i= count; i > 0; i--)
    {
        for(int x=0; x<i; x++)
        cout << "*";
        
    cout << "\n";
    }
    
}