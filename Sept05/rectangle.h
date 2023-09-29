#include "point.h"
#include <iostream>
struct Rectangle {
	Point p1, p2;
	
	Rectangle* twin() {
		Rectangle* another = (Rectangle*) malloc( sizeof(Rectangle) );
		std::cout << "Address of another: " << another;
		another->p1.x = this->p1.x;
		another->p1.y = this->p2.y;
		another->p2.x = this->p2.x;
		another->p2.y = this->p1.y;
		return another;
	}
};
