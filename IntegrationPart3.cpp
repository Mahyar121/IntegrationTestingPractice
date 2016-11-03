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

	cout << "\n Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
}
/************************************************
*				getChoice                       *
* This function inputs, validates, and returns  *
* the user's menu choice.                       *
*************************************************/
int getChoice() {
	int choice;
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
	cout << endl
		<< "Membership Type : " << memberType << "     "
		<< "Number of months: " << months << endl
		<< "Total charges   : $" << (rate * months) << endl;

	// Hold the screen until the user presses the ENTER key.
	cout << "\nPress the Enter key to return to the menu. ";
	cin.get();		// Clear the previous \n out of the input buffer
	cin.get();		// Wait for the user to press ENTER

}

/* PROGRAM OUTPUT

Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

1
For how many months? 3

Membership Type : Adult     Number of months: 3
Total charges   : $360.00

Press the Enter key to return to the menu.

Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

2
For how many months? 4

Membership Type : Child     Number of months: 4
Total charges   : $240.00

Press the Enter key to return to the menu.

Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

3
For how many months? 2

Membership Type : Senior     Number of months: 2
Total charges   : $200.00

Press the Enter key to return to the menu.

Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

4
Press any key to continue . . .
*/