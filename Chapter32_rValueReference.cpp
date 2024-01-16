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

void Print(int& x) {
	cout << "Print(int&)" << endl;
}

void Print(const int& x) {
	cout << "Print(const int&)" << endl;
}

//void Print(int&& x) {
//	cout << "Print(int&& x)" << endl;
//}

int main() {

	int x = 10;
	Print(x);

	Print(3);

	return 0;
}
