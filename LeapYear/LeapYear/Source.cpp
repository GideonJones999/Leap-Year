#include <iostream>
#include <iomanip>
#include <string>
//Sounds
#include <Windows.h>
#include <MMSystem.h>
//Randoms 
#include <random>
#include <cstdlib>
#include <ctime>
//Dynamic Arrays
#include <vector>
// Sleep Function
#include <time.h>

using namespace std;
void CheckLeap(int);

int main() {
	int year = 0;
	cout << "What year would you like to check?" << endl;
	cin >> year;

	while (cin.fail())
	{
		cout << "Error: Data not readable. Try again." << endl;
		cin.clear();
		string garbage;
		cin >> garbage;

		cout << "What year would you like to check?" << endl;
		cin >> year;
	}

	CheckLeap(year);
	system("PAUSE");
	return 0;
}

void CheckLeap(int year) {
	if (year % 4 == 0)
	{
		if (year % 100 != 0 || year % 400 == 0) 
		{
			cout << "The year " << year << " is a leap year." << endl;
		}
		else
		{
			cout << "The year " << year << " is not a leap year." << endl;
		}
	}
	else 
	{
		cout << "The year " << year << " is not a leap year." << endl;
	}
}