/*
1. Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. 
Display 16 characters on each line.

2. A country club, which currently charges $2,500 per year for membership, 
has announced it will increase its membership fee by 4 percent each year for the next 6 years. 
Write a program that uses a loop to display the projected rates for the next 6 years.
*/

#include <iostream>
using namespace std;
// returns ascii 0-120 in 16 character lines
void asciiString();
// enter years to get rate for that year
int countryClubFee(int);
// get rate for (x=years, memFee = 2500)
float countryClubRate(int,int);

int main(){
// asciiString();
for (int i = 1; i <= 6; i++)
{
    float rate= countryClubRate(i,2500);
    int fee = countryClubFee(i);
    if (i == 1)
    {
    cout <<"The country club fee will be " << fee << " in " << i << " year, with a rate of: " << rate;
    cout << "\n";
    }else{
    cout <<"The country club fee will be " << fee << " in " << i << " years, with a rate of: " << rate;
    cout << "\n";
    }
}


    
}
int countryClubFee(int x){
    int memFee = 2500;
    float rate = 1.00f;
    if (x >1 )
    {
        rate += (x*(4/100.00));

        double fee = rate*memFee;
    return fee;
    }else if(x == 1){
        double rate = 1.04;
        double fee = rate*memFee;
    return fee;
    }else{
        return memFee;
    }
}    
float countryClubRate(int x, int memFee){
    float rate = 1.00;
    if(x<=1){
    return rate+= .04;
    }else{
        return rate += (x*(4/100.00));
    }

    
}

        
void asciiString(){
    string characters = "";
        int l = 16;
        // build ascii string
        for (int i = 0; i <= 120; i++){
            characters += char(i);
        }

        for (int x = 0; x <= characters.length(); x++)
        {
            if (x%l == 0)
            {
                cout << "\n";
            }
            cout << characters[x];
        }
    // cout << "TEST" << characters << "TEST";
    }
    

