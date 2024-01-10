#include <iostream>

// Open the std namespace
using namespace std;

// Entry point of the program
int main() {
	
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int x : arr) {
		cout << x << " ";
	}
	cout << endl;

	for (auto& x : arr) {
		cout << x << " ";
	}
	cout << endl;

	for (auto x : { 1, 2, 3 }) {
		cout << x << " ";
	}
	cout << endl;

	int* begi = &arr[0];
	int* endi = &arr[5];

	while (begi != endi) {
		cout << *begi << " ";
		++begi;
	}
	cout << endl;

	int* begii = begin(arr);
	int* endii = end(arr);

	while (begii != endii) {
		cout << *begii << " ";
		++begii;
	}

	// Return the exit code
	return 0;
}


