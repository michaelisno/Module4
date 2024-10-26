#include <iostream>

using namespace std;

void storeUserInputs(int userInputs[]);
void printUserInputs(int userInputs[]);

int findSum(int userInputs[]);
float findAverage(int userInputs[]);
int findLargestValue(int userInputs[]);
int findSmallestValue(int userInputs[]);
int findEvenCount(int userInputs[]);
int findOddCount(int userInputs[]);

// Number of inputs the user can enter
const int totalInputCount = 20;

int main()
{
	int userInputs[totalInputCount] = {};

	storeUserInputs(userInputs);
	printUserInputs(userInputs);

	cout << "Sum of Inputs: " << findSum(userInputs) << endl;
	cout << "Average of Inputs: " << findAverage(userInputs) << endl;
	cout << "Largest Input: " << findLargestValue(userInputs) << endl;
	cout << "Smallest Input: " << findSmallestValue(userInputs) << endl;
	cout << "Number of Evens: " << findEvenCount(userInputs) << endl;
	cout << "Number of Odds: " << findOddCount(userInputs) << endl;

	return 0;
}

int findSum(int userInputs[])
{
	int totalSum = 0;

	for (int i = 0; i < totalInputCount; i++)
	{
		totalSum = totalSum + userInputs[i];
	}

	return totalSum;
}

float findAverage(int userInputs[])
{
	float totalSum = findSum(userInputs);
	return totalSum / totalInputCount;
}

int findLargestValue(int userInputs[])
{
	int currentLargestValue = userInputs[0];

	for (int i = 0; i < totalInputCount; i++)
	{
		if (userInputs[i] > currentLargestValue)
			currentLargestValue = userInputs[i];
	}

	return currentLargestValue;
}

int findSmallestValue(int userInputs[])
{
	int currentSmallestValue = userInputs[0];

	for (int i = 0; i < totalInputCount; i++)
	{
		if (userInputs[i] < currentSmallestValue)
			currentSmallestValue = userInputs[i];
	}

	return currentSmallestValue;
}

int findEvenCount(int userInputs[])
{
	int totalEvenCount = 0;

	for (int i = 0; i < totalInputCount; i++)
	{
		if (userInputs[i] % 2 == 0)
			totalEvenCount++;
	}

	return totalEvenCount;
}

int findOddCount(int userInputs[])
{
	int totalOddCount = 0;

	for (int i = 0; i < totalInputCount; i++)
	{
		if (userInputs[i] % 2 != 0)
			totalOddCount++;
	}

	return totalOddCount;
}

void storeUserInputs(int userInputs[])
{
	for (int currentInput = 0; currentInput < totalInputCount; currentInput++)
	{
		cout << "Enter an Input: " << endl;
		cin >> userInputs[currentInput];
	}
}

void printUserInputs(int userInputs[])
{
	cout << "\nList of entered User Inputs: " << endl;

	for (int i = 0; i < totalInputCount; i++)
	{
		cout << userInputs[i] << endl;
	}

	cout << endl;
}