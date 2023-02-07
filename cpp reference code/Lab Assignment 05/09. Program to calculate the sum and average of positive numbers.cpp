/*
 * Name: Khusan Rashidov
 * Student ID: U2010224
 * Program Statement: Program to calculate the sum and average of positive numbers
 */

 //#include <> => for system library or package
 //#include "" => for user defined library or file

#include <iostream>
using namespace std;
int main()
{

	const int maxInput = 8;
	int i;
	double number, average, sum = 0.0;

	for (i = 1; i <= 8; ++i)
	{
		cout << "Enter a number: ";
		cin >> number;

		// If the user enters a negative number, the sum and average are displayed.
		// goto jump if the user enters a negative number
		if (number < 0.0)
		{
			goto jump;
		}
		sum += number;
	}

jump:
	average = sum / (i - 1);
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	return 0;
}