
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //init variable/s
    char name[16] = " ";
    float money = 123.45F;
    float yourMoney = 50.95F;
    float myMoney = 12.09F;

    // get user info
    cout << "what is your name? ";
    cin >> name;
    cout << "hello " << name << "\n";

    // money
    cout << "total $";
    cout.width(20);
    cout << money << endl;

    cout << "your $";
    cout.width(20);
    cout << yourMoney << endl;

    cout << "my $";
    cout.width(20);
    cout << myMoney << endl;




}

