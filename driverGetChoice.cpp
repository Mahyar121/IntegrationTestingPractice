// This is a driver program that tests
// the getChoice
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype
int getChoice();

int main() {
	int choice;
	do {
		cout <<"Calling the getChoice function" << endl;
		choice = getChoice();
		cout <<"The number returned from getChoice is: "<< choice << endl;
		cout << endl;
	} while (choice != 4);
	system("PAUSE");
	return 0;
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
/* PROGRAM OUTPUT
Calling the getChoice function
1
The number returned from getChoice is: 1

Calling the getChoice function
2
The number returned from getChoice is: 2

Calling the getChoice function
3
The number returned from getChoice is: 3

Calling the getChoice function
4
The number returned from getChoice is: 4

Press any key to continue . . .
*/