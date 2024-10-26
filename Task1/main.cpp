#include <iostream>

using namespace std;

int main()
{
	int iterations = 0;

	while (iterations < 10)
	{
		cout << "Enter any number other than 5: " << endl;

		int userInput;
		cin >> userInput;

		if (userInput == 5)
			break;

		iterations++;
	}
	
	if (iterations < 10)
		cout << "Hey you weren't supposed to enter 5!" << endl;
	else
		cout << "Wow, you're more patient than I am, you win." << endl;

	return 0;
}