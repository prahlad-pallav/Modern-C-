#include <iostream>
using namespace std;


void Print(int count, char ch) {
	for (int i = 0; i < count; i++) {

		cout << ch << "";
	}
	cout << endl;
}


void EndMessage() {
	cout << "End of Program" << endl;
}

int main() {

	Print(5, '#');

	// Function Pointer -> holds the address of the function, it's type is same as the signature
	// of the function (return type & arguments)

	void (*pfn) (int, char) = Print;

	(*pfn)(8, '@');

	pfn(10, '*');

	// this will invoke at the very last of the program
	atexit(EndMessage);

	cout << "End of main function" << endl;

	return 0;
}
