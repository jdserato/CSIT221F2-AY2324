#include <iostream>
#include "point.h"
using namespace std;

int main() {
	point p1, p2;
	cout << "Size of point is " << sizeof(Point) << endl;
	cout << "Enter coords of point 1: ";
	cin >> p1.x >> p1.y;
	cout << "Enter coords of point 2: ";
	cin >> p2.x >> p2.y;
	point mid = p1.midpoint(&p2);
	cout << "Point 1 is (" << p1.x << "," << p1.y << ")" << endl;
	cout << "Midpoint is (" << mid.x << "," << mid.y << ")"<< endl;
	return 0;
}
