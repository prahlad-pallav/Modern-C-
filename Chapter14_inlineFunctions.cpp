#include <iostream>
using namespace std;


// inline function -> requests the compiler to replace the call with the function body
inline int Square(int x) {
	return x * x;
}

int main() {

	int val = 4;
	
	int result1 = Square(val);
	cout << result1 << endl;

	int result2 = Square(val + 1);
	cout << result2 << endl;

	return 0;
}
