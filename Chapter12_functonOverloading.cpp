#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

extern "C" void Print(int* x) {

}

void Print(const int* x) {

}

int main() {
	
	int result1 = add(3, 4);
	cout << result1 << endl;

	double result2 = add(3.4, 5.7);
	cout << result2 << endl;

	const int x = 7;
	int y = 3;
	Print(&y);
	Print(&x);

	return 0;
}
