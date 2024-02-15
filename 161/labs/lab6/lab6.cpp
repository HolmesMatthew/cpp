#include <iostream>
#include <cmath>
#include <iomanip>
using std::setw;
using namespace std;

int GetData();
void DisplayMenu(int);
void ProcessMenuChoice(int,int);
void IsPosNeg(int);
void IsOddEvan(int);
int FindNumDigits(int);
int FindDigitAtPosition(int);
void DisplayAdditionTable();
void DisplayMultiplicationTable();

int main()
{
	unsigned short int menu_choice = 0;
    int number = 0;
	ProcessMenuChoice(menu_choice,number);



} // end main





int GetData(){
    int number = 0;
    cout << "\nEnter a whole number: ";
	cin >> number;
	if (number > -100000 && number < 100000 )
	{
		return number;
	}
	else{
		while (number < -100000 or number > 100000)
		{
			cout << "INVALID NUMBER: enter a new one\n";
			cin >> number;
		}
		return number;
	}
	
    
}
void DisplayMenu(int){
    
	unsigned short int menu_choice = 0;

    cout << "1) Is a number odd or even?\n"
			 << "2) Is a number positive or negative?\n"
			 << "3) What is the square root of a number?\n"
			 << "4) How many digits are in a number?\n"
			 << "5) What digit is at a specific position?\n"
			 << "6) Display the addition table.\n"
			 << "7) Display the multiplication table.\n"
			 << "8) Exit\n\n";	
	

}
void ProcessMenuChoice(int menu_choice,int number){
	do
	{
		DisplayMenu(menu_choice);
	cout << "Enter a menu choice: ";
	cin >> menu_choice;
	if ( menu_choice >= 1 && menu_choice <= 5 )
		{
			number = GetData();
		}
	switch ( menu_choice )
		{
			case 1: // even/odd
				IsOddEvan(number);
			break;

			case 2: // pos/neg
				IsPosNeg(number);
			break;

			case 3: // sqrt
				if ( number < 0 )
					cout << "\nError: Cannot take the square root of a negative number.";
				else
					cout << "\nThe square root of the number is: "
						 << sqrt( static_cast<float> (number) );

				cout << "\n\n";
			break;

			case 4: // find digits in num
			{
				int digits = FindNumDigits(number);
				cout << "\nThere are " << digits << " digits.\n\n";
			}
			break;
			case 5: // find digits at x pos
			{
				
				int digit_position = FindDigitAtPosition(number);
			}
			break;
			case 6: // addition table
				DisplayAdditionTable();

			break;
			case 7: // multiplication table
				DisplayMultiplicationTable();

				
			break;

			case 8: // end
				cout << "\nThanks for playing!\n\n";
			break;
            //invalid choice
			default:
				cout << "\nError: Invalid menu choice.\n\n";
		}
	} while (menu_choice != 8);
	
	

}

void IsPosNeg(int number){
cout << "\nThe number is: ";
				if ( number == 0 )
					cout << "Zero";
				else if ( number < 0 )
					cout << "Negative";
				else
					cout << "Positive";

				cout << "\n\n";
}

void IsOddEvan(int number){
    cout << "\nThe number is: ";
				if ( number == 0 )
					cout << "Zero";
				else if ( number % 2 == 0 )
					cout << "Even";
				else
					cout << "Odd";
			
				cout << "\n\n";
}


int FindNumDigits(int number){
    int temp = number;
				unsigned short digits = 0;

				if (temp == 0 )
					digits = 1;
				else
				{
					for ( ; temp != 0; digits++ )
						temp /= 10;
				}
				return digits;
}

int FindDigitAtPosition(int number){
    int temp = abs( number );
	unsigned short digit_position = 0, digits = 0;
	cout << "Enter the digit position: ";
	cin >> digit_position;	
	for ( ; temp != 0 && digits < digit_position - 1; digits++ )
			temp /= 10;
		cout << "\nDigit at position " << digit_position << ": " << temp % 10 << "\n\n";
		return temp;
}

void DisplayAdditionTable(){
	cout << '\n' << setw(4) << ' ';
				for ( int col = 1; col <= 12; col++ )
					cout << setw(4) << col;

				cout << '\n';

				for ( int row = 1; row <= 12; row++)
				{
					cout << setw(4) << row;

					for ( int col = 1; col <= 12; col++ )
						cout << setw(4) << row + col;
	
					cout << '\n';
				}
				cout << '\n';

}

void DisplayMultiplicationTable(){
	cout << '\n' << setw(4) << ' ';
	for ( int col = 1; col <= 12; col++ )
		cout << setw(4) << col;
	cout << '\n';
	for ( int row = 1; row <= 12; row++)
	{
		cout << setw(4) << row;
		for ( int col = 1; col <= 12; col++ )
			cout << setw(4) << row * col;
		cout << '\n';
	}
	cout << '\n';
}

