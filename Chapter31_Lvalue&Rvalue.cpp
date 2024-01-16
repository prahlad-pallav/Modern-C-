#include <iostream>
using namespace std;


// Returns r_value
int Add(int x, int y) {
	return x + y;
}

// Returns l_value
int& transform(int& x) {
	x *= x;
	return x;
}

int main() {

	// x, y & z are l_value and 5, 10, 15 are r_value
	int x = 5;
	int y = 10;
	int z = 15;

	// returns r_value
	int result = (x + y) * z;

	// returns l_value
	++x = 6;

	return 0;
}
