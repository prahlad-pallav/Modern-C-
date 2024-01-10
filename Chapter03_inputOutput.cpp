// Contains the facilities for I/O
#include <iostream>

// Open the std namespace
using namespace std;

// Entry point of the program
int main() {

	cout << "Hello World" << " " << 45 << " " << 241.112 << " " << true << endl;

	int age;
	cout << "Tell me your age: ";
	cin >> age;
	cout << "Your age is: " << age << endl;

	cout << "Tell me your name: ";
	char buff[512];
	cin >> buff;
	// cin.getline(buff, 64, '\n');
	cout << "Your name is: " << buff << endl;

	// Return the exit code
	return 0;
}
