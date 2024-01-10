#include <iostream>
#include <string>

// Open the std namespace
using namespace std;

// Entry point of the program
int main() {

	int a1; // Unintialized
	int a2 = 0; // Copy initisation
	int a3(5); // Direct initisation

	std::string s1;
	std::string s2("Hello");

	char d1[8];
	char d2[8] = { '\0' };
	char d3[8] = { 'a', 'b', 'c', 'd' };
	char d4[8] = { "abcd" };

	int b1{}; // Value initisation
	// int b2(); // Most vexing parse
	int b3{ 5 };
	int b4 = 0;

	char e1[8]{};
	char e2[8]{ "Hello" };

	int* p1 = new int();
	char* p2 = new char[8]{};
	char* p3 = new char[8] {"Hello"};

	// Return the exit code
	return 0;
}


/*
Types of intialisation:
1. Value initialisation -> T obj{};
2. Direct initialisation -> T obj{v};
3. Copy initialisation -> T obj = v;
*/


/*
Advantages:
1. It forces initialisation
2. You can use direct initialisation for array types
3. It prevents narrowing conversions
4. Uniform syntax for all types
*/
