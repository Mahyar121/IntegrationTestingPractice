// This is a modular, menu-driven program that computes
// health club membership fees.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void displayMenu();
int getChoice();
void showFees(string category, double rate, int months);

int main() {
	// Constants for monthly membership rates
	const double ADULT_RATE = 120.0,
		CHILD_RATE = 60.0,
		SENIOR_RATE = 100.0;
	int choice,
		months;

	// Set numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	do
	{
		displayMenu();
		choice = getChoice();

		if (choice != 4) {
			cout << "For how many months? ";
			cin >> months;

			switch (choice)
			{
			case 1: showFees("Adult", ADULT_RATE, months);
				break;
			case 2: showFees("Child", CHILD_RATE, months);
				break;
			case 3: showFees("Senior", SENIOR_RATE, months);
				break;
			}
		}
	} while (choice != 4);
	system("PAUSE");
	return 0;
}

/********************************************
*				displayMenu                 *
* This function clears the screen and then  *
* the user's menu choice.                   *
*********************************************/
void displayMenu() {
	cout << "The function displayMenu was called" << endl;
}
/************************************************
*				getChoice                       *
* This function inputs, validates, and returns  *
* the user's menu choice.                       *
*************************************************/
int getChoice() {
	int choice;
	cout << "The function getChoice was called" << endl;
	cin >> choice;
	while (choice < 1 || choice > 4) {
		cout << "The only valid choices are 1-4. Please re-enter. ";
		cin >> choice;
	}
	return choice;
	
}
/*************************************************************
*				          showFees                           *
* This function uses the membership type, monthly rate, and  *
* number of months passed to it as arguments to compute and  *
* display a member's total charges. It then holds the screen *
* until the user presses the ENTER key. This is necessary    *
* because after returning from this function the displayMenu *
* function will be called, and it will clear the screen.     *
**************************************************************/
void showFees(string memberType, double rate, int months) {
	cout << "The function showFees was called with the following arguments:" << endl;
	cout << endl
		<< "Member type : " << memberType << endl
		<< "rate: " << rate << endl
		<< "months: " << months << endl;
			
}

/* PROGRAM OUTPUT
The function displayMenu was called
The function getChoice was called
1
For how many months ? 3
The function showFees was called with the following arguments :

Member type : Adult
rate : 120.00
	months : 3
	The function displayMenu was called
	The function getChoice was called
	2
	For how many months ? 2
	The function showFees was called with the following arguments :

Member type : Child
rate : 60.00
	months : 2
	The function displayMenu was called
	The function getChoice was called
	3
	For how many months ? 4
	The function showFees was called with the following arguments :

Member type : Senior
rate : 100.00
	months : 4
	The function displayMenu was called
	The function getChoice was called
	4
	Press any key to continue . . .
*/