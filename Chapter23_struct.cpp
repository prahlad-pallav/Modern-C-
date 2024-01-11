#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

void DrawLine(int x1, int y1, int x2, int y2) {

}

void DrawLine(Point start, Point end) {
	cout << start.x << " " << start.y << endl;
}

int main() {



	return 0;
}
