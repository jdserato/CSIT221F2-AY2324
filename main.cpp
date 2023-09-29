#include <iostream>
#include "arraylist.h"
using namespace std;

struct foo {
	int* a;
	char b, ch2;
	int i;
	
};

int main() {
	cout << sizeof(foo) << endl;
	
	cout << "Neg 1 is " << (size_t) -13 << endl;
	ArrayList* list = new ArrayList();
	int n;
	char op;
	do {
		cin >> op;
		switch (op) {
			case 'a':
				cin >> n;
				list->add(n);
				break;
			case 'p':
				list->print();
				break;
			case 'r':
				cin >> n;
				list->remove(n);
				break;
			case 'R':
				cin >> n;
				cout << list->removeAll(n) << endl;
				break;
		}
		
	} while (op != 'x');
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


