#include <iostream>

// Open the std namespace
using namespace std;


// Entry point of the program
int main() {
	
	float radius = 0;
	cout << "Value of radius: ";
	cin >> radius;

	const float PI = 3.14f; // use captialisation of declaring const.

	float area = PI * radius * radius;
	float circumference = 2 * PI * radius;

	cout << "Area of circle: " << area << endl;
	cout << "Circumference of circle: " << circumference << endl;

	// Return the exit code
	return 0;
}


