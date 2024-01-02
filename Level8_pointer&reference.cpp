#include <iostream>

// Open the std namespace
using namespace std;

void swap_pointer(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swap_reference(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

// Entry point of the program
int main() {
	
	int a = 5, b = 10;

	cout << "Value of a before swapping: " << a << endl;
	cout << "Value of b before swapping: " << b << endl;

	swap_pointer(&a, &b);

	cout << "Value of a after swapping: " << a << endl;
	cout << "Value of b after swapping: " << b << endl;

	swap_reference(a, b);

	cout << "Value of a after double swapping: " << a << endl;
	cout << "Value of b after double swapping: " << b << endl;

	// Return the exit code
	return 0;
}


