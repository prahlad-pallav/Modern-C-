#include <iostream>
using namespace std;


void CreateWindow(const char* title, int x, int y, int width, int height);


void CreateWindow(const char* title, int x = -1, int y = -1, int width = -1, int height = -1) {

	cout << "Title name: " << title << endl;
	cout << "Position of x: " << x << endl;
	cout << "Position of y: " << y << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
	cout << endl << endl;
}


int main() {
	
	CreateWindow("Windows", 40, 23, 230, 450);
	CreateWindow("MAC", 34, 12, 234, 450);
	CreateWindow("Linux");
	CreateWindow("OpenSource", 31, 44);


	return 0;
}
