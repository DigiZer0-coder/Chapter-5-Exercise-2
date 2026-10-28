#include <iostream>
#include <string>
using namespace std;

int main()
{
	int userInput;
	int number = 1;

	cout << "Please enter a positive integer: ";
	cin >> userInput;
	
	while (userInput < 1)
	{
		cout << "Please enter a positive integer: ";
		cin >> userInput;
	}

	while (number <= userInput)
	{
		cout << number << endl;
		number++;
	
		if (userInput == number) {
			cout << "The number you entered is: " << userInput << endl;
			break;
		}
	}
}

