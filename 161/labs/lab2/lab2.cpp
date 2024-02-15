#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    // initialize variables for 1
    int sale = 0;
    int cont = 0;
    

    while (cont == 0)
    {

/*
1: Using the following chart, write an if/else if statement that assigns .10, .15, or .20 to commission, depending on the value in sales
    Sales	Commission Rate
    Up to $10,000	    10%
    $10,000 to $15,000	15%
    Over $15,000	    20%
*/
// -----
/*
        cout << "Enter your sale amount: ";
        cin >> sale;
        if (sale < 10000)
        {
            cout << "Sale is less than 10,000 \n";
            float commission = sale * .10;
            cout << commission << " is your amount of commission \n";
        }else if (sale >= 10000 && sale < 15000)
        {
            cout << "Sale is greater than 10,000 but less than 15,000 \n";
            float commission = sale * .10;
            cout << commission << " is your amount of commission \n";

        }else if (sale >= 15000)
        {
            cout << "Sale is greater than 20,000 but less than 30,000 \n";
            float commission = sale * .10;
            cout << commission << " is your amount of commission \n";

        }
*/
        // -----
        // 2. Write nested if statements that perform the following tests: If amount1 is greater than 10 and amount2 is less than 100, 
        // display the greater of the two.
/*
        // var for 2
        int num1 =0;
        int num2 =0;
        
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        if (num1 > 10 && num2 < 100)
        {
            if (num1>=num2)
            {
                cout << num1 << "\n";
            } else{
                cout << num2 << "\n";
            }
            
        }
        
*/
// ------
// 3. The program should ask for the name of the movie, and how many adult and child tickets were sold.  
        string inputLine;
        int aTicket= 0;
        int cTicket=0;
        float profit = 0.0f;
        float vendor = 0.0f;

        cout << "\nEnter the name of the movie: "; // get movie title
        getline(cin, inputLine);
        cout << "\nEnter the number of adult tickets sold: ";
        cin >> aTicket;
        cout << "\nEnter the number of children tickets sold: ";
        cin >> cTicket;
        profit += aTicket * 6;
        profit += cTicket * 3;
        vendor += profit * .20;
        cout << 
        "Movie title: " << inputLine << 
        "\nAdult tickets sold: "<< aTicket << 
        "\nChildren tickets sold: "<< cTicket << 
        "\nProfit: " << profit-vendor <<
        "\nVendor pay: " << vendor;


        cout << "\nDo you want to enter another? Press 0 to continue and 1 to quit: ";
        cin >> cont;



}
}
