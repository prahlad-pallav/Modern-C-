#include <iostream>
#include <string>

// Open the std namespace
using namespace std;

// Entry point of the program
int main() {
	
	// Referent
	int x = 10;
	
	// Reference
	int& ref = x;

	cout << "Value of x: " << x << endl;
	cout << "Value of ref: " << ref << endl;

	x = 6;
	cout << "Value of x after changing x: " << x << endl;
	cout << "Value of ref after changing x: " << ref << endl;

	ref = 10;
	cout << "Value of x after changing ref: " << x << endl;
	cout << "Value of ref after changing ref: " << ref << endl;

	// Return the exit code
	return 0;
}


