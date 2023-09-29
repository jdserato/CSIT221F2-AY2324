#include <iostream>
#include "rectangle.h"
using namespace std;

int main() {
	point p1, p2;
	cout << "Size of point is " << sizeof(Point) << endl;
	cout << "Enter coords of point 1: ";
	cin >> p1.x >> p1.y;
	cout << "Enter coords of point 2: ";
	cin >> p2.x >> p2.y;
	Rectangle rec;
	rec.p1 = p1;
	rec.p2 = p2;
	Rectangle* twin = rec.twin();
	cout << "Orig's Point 1 is (" << rec.p1.x << "," << rec.p1.y << ")" << endl;
	cout << "Orig's Point 2 is (" << rec.p2.x << "," << rec.p2.y << ")" << endl;
	cout << "Twin's Point 1 is (" << twin->p1.x << "," << twin->p1.y << ")" << endl;
	cout << "Twin's Point 2 is (" << twin->p2.x << "," << twin->p2.y << ")" << endl;
//	cout << "Midpoint is (" << mid.x << "," << mid.y << ")"<< endl;
	delete twin;
//	free(twin);
	cout << "Orig's Point 1 is (" << rec.p1.x << "," << rec.p1.y << ")" << endl;
	cout << "Orig's Point 2 is (" << rec.p2.x << "," << rec.p2.y << ")" << endl;
	cout << "Twin's Point 1 is (" << twin->p1.x << "," << twin->p1.y << ")" << endl;
	cout << "Twin's Point 2 is (" << twin->p2.x << "," << twin->p2.y << ")" << endl;

	return 0;
}
