#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int x = 0;
int y = 0;

int cont = 1;

while (cont != 0)
{
    cout << "\nenter a number for X: "; 
    cin >> x;
    cout << "\nenter a number for Y: ";
    cin >> y;

    for (int i = 1; i <= y; i++){ // vertical

        for (int z = 1; z <= x; z++){ // horizontal

            if (i == 1){ // if we are on first row
                cout << " * ";
                }else if(i == y){ // if we are on last row
                cout << " * ";
                }else{
                    if (z == 1){ // if we are on first column
                    cout << " * ";
                    }else if( z== x){ // if we are on last column
                    cout << " * ";
                    }else{ // every other time
                    cout << "   ";}}
        }

        cout << "\n";
    }

    cout << "\nPress 0 to exit or 1 to continue: ";
    cin >> cont;
    }
}

