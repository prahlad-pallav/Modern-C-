#include <iostream>

// Open the std namespace
using namespace std;

int Sum(int x, int y) {
	return x + y;
}

// Entry point of the program
int main() {
	
	auto i = 10;
	auto j = 5;
	auto add = i + j;
	cout << add << endl;

	auto result = Sum(i, j);
	cout << result << endl;

	static auto y = 2;
	auto list = { 1, 2, 3, 4 };

	// Return the exit code
	return 0;
}


