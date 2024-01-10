#include <iostream>

// Open the std namespace
using namespace std;

// Entry point of the program
int main() {

	int x = 10;
	cout << "Value of x: " << x << endl;
	int* p1 = &x;
	cout << "Address of x: " << p1 << endl;

	// dereference operator
	*p1 = 5;
	cout << "Value of x: " << x << endl;

	int y = *p1;
	cout << "Value of y: " << y << endl;

	int* p2 = nullptr;
	cout << "Address of nullptr: " << p2 << endl;

	// Return the exit code
	return 0;
}


