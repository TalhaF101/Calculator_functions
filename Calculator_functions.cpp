
#include <iostream>

using namespace std;

// functions for every operation

void sum() {
	int num1, num2;

	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	int sum = num1 + num2;

	cout << "Sum of two numbers is = " << sum << endl;
}

void subtract() {
	int num1, num2;

	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	int subtraction = num1 - num2;

	cout << "Subraction of two numbers is = " << subtraction << endl;
}

void multiply() {
	int num1, num2;

	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	int multiplication = num1 * num2;

	cout << "Product of two numbers is = " << multiplication << endl;
}

void divide() {
	double num1, num2;

	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
	double division = num1 / num2;

	cout << "Division of two numbers is = " << division << endl;
}


int main()
{
	int num;

	while (true)
	{
		cout << "******** MENU ********" << endl;
		cout << "Press 1 for Addition: " << endl;
		cout << "Press 2 for Subtraction: " << endl;
		cout << "Press 3 for Multiplication: " << endl;
		cout << "Press 4 for Division: " << endl;
		cout << "Press 0 to exit the program:" << endl;

		cin >> num;

		if (num == 0)
		{
			break;   //for exiting the loop
		}

		switch (num)
        {

		case 1:
		{
			sum();
			break;

		} //end case 1

		case 2:
		{
			subtract();
			break;

		} // end case 2

		case 3:
		{
			multiply();
			break;

		} //end case 3

		case 4:
		{
			divide();
			break;

		} //end case 4

		default:
		{
			cout << "Please enter a valid input!!" << endl;

		} //end default

		} //end switch

	} //end while

	return 0;
}

