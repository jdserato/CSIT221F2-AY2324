#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
	ArrayList* list = new ArrayList();
	list->add(13);
	list->print();
	list->add(7);
	list->print();
	list->add(4);
	list->print();
	list->add(25);
	list->print();
	list->add(34);
	list->print();
	list->add(17);
	list->print();
	list->remove(4);
	list->print();
	list->add(27);
	list->print();
	return 0;
}
