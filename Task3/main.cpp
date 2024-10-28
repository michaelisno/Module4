#include <iostream>
#include <fstream>

using namespace std;

void loadFileToArray(string fileName, char* letterArray);
void convertToUpperCase(char* letterArray);
void saveArrayToFile(string fileName, char* letterArray);

int main()
{
	char letters[26] = {};

	loadFileToArray("alphabet.txt", letters);
	convertToUpperCase(letters);
	saveArrayToFile("upper.txt", letters);

	return 0;
}

void loadFileToArray(string fileName, char* letterArray)
{
	ifstream file(fileName);

	if (file.is_open())
	{
		int currentIndex = 0;
		char letter;

		while (file >> letter)
		{
			letterArray[currentIndex] = letter;
			currentIndex++;
		}

		file.close();
	}
	else
	{
		cout << "Error reading file." << endl;
	}
}
void convertToUpperCase(char* letterArray)
{
	for (int i = 0; i < 26; i++)
	{
		letterArray[i] -= 32;
	}
}
void saveArrayToFile(string fileName, char* letterArray)
{
	ofstream file(fileName);
	if (file.is_open())
	{
		for (int i = 0; i < 26; i++)
		{
			file << letterArray[i] << endl;
		}

		file.close();
	}
	else
	{
		cout << "Error writing to file." << endl;
	}
}