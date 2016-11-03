// This is a driver program that tests
// the displayMenu
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype
void displayMenu();


int main() {
		cout <<"Calling the displayMenu function" << endl;
		displayMenu();
		
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
/* PROGRAM OUTPUT
Calling the displayMenu function

Health Club Membership Menu

1. Standard Adult Membership
2. Child Membership
3. Senior Citizen Membership
4. Quit the Program

Press any key to continue . . .
*/