// This is a driver that tests
// the showFees function.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype
void showFees(string category, double rate, int months);

int main() {

	cout << "Calling the showFees function with arguments "
		<< "Adult, 150.0, 3." << endl;
	showFees("Adult", 150.0, 3);

	
	cout << "Calling the showFees function with arguments "
		<< "Child, 120.0, 4." << endl;
	showFees("Child", 120.0, 4);
	
	
	cout << "Calling the showFees function with arguments "
		<< "Senior, 50.0, 2." << endl;
	showFees("Senior", 50.0, 2);

	system("PAUSE");
	return 0;
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
		<< "Monthly rate $" << rate << endl
		<< "Number of months: " << months << endl
		<< "Total charges   : $" << (rate * months)
		<< endl << endl;
}

/* PROGRAM OUTPUT
Calling the showFees function with arguments Adult, 150.0, 3.

Membership Type : Adult     Monthly rate $150
Number of months: 3
Total charges   : $450

Calling the showFees function with arguments Child, 120.0, 4.

Membership Type : Child     Monthly rate $120
Number of months: 4
Total charges   : $480

Calling the showFees function with arguments Senior, 50.0, 2.

Membership Type : Senior     Monthly rate $50
Number of months: 2
Total charges   : $100

Press any key to continue . . .
*/

