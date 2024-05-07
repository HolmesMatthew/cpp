#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int a = 9;
	int b = 3;
	int c = 3;

	cout << "Enter two numbers: ";
	cin >> a >> c;

	if (c < a and c != a)
	{
		cout << "The variable C: " << c << " is less than the variable A: " << a << endl;
	}
	else {
		cout << "The variable C: " << c << " is either more than the variable A: " << a << " or is equal to A" << endl;
	}
}

