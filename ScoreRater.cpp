/* Relational Operators Table
* == means equal to 
* != means not equal to
* > means greater than
* < means less than
* >= greater than or equal to
* <= means less than or equal to
* 
*/

// Score Rater: Simple Program that rates your input score to determine if it is good given what is considered acceptable. 1000 is used in this example
// First half Demonstrates if statement
//Second half demonstrates if else statement

#include <iostream>
using namespace std;

int score;

int main()
{
	/*if (true)
	{
		cout << "This is always displayed. \n\n";
	}

	if (false)
	{
		cout << "This is never displayed.\n\n";
	}

	int score = 1000;

	if (score)
	{
		cout << "At least you didn't score zero.\n\n";
	}

	if (score >= 250)
	{
		cout << "You scored 500 or more. Nice.\n\n";
		if (score >= 1000) // this is considered nesting when one statement is within another.
		{
			cout << "You scored 1000 or more. Impressive!\n";
		}
	}

	return 0; */

	cout << "Welcome! Please enter your score: \n\n";
	cin >> score;

	if (score >= 1000)
	{
		cout << "\nWow! You're really cool!\n\n";
	}
	else
	{
		cout << "\nBetter luck next time man.\n\n";
	}

	cout << "Thanks for participating!" << endl;

	return 0;


}
