// Contains the facilities for I/O
#include <iostream>

// Open the std namespace
using namespace std;


//Prototype or Declaration
int add(int x, int y);

// Entry point of the program
int main() {

	int x, y;
	cout << "Value of x : ";
	cin >> x;
	cout << endl;
	
	cout << "Value of y : ";
	cin >> y;
	cout << endl;

	int result = add(x, y);
	cout << "Sum of x and y is: " << result << endl;

	// Return the exit code
	return 0;
}


// Function Definition
int add(int x, int y) {
	return x + y;
}
