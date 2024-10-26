#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char letters[26] = {};

	// Read from file
	ifstream inFile("alphabet.txt");
	char letter;

	if (inFile.is_open())
	{
		int currentIndex = 0;

		while (inFile >> letter)
		{
			letters[currentIndex] = letter;
			currentIndex++;
		}

		inFile.close();
	}

	// Convert to upper case
	for (int i = 0; i < 26; i++)
	{
		letters[i] -= 32;
	}

	// Write to new file
	ofstream outFile("upper.txt");
	if (outFile.is_open())
	{
		for (int i = 0; i < 26; i++)
		{
			outFile << letters[i] << endl;
		}

		outFile.close();
	}
	else
	{
		cout << "Error" << endl;
	}

	return 0;
}