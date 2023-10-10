#include <iostream>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	LinkedList* list = new LinkedList();
	int num, pos;
	char op;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'f':
				cin >> num;
				list->addFirst(num);
				break;
			case 'l':
				cin >> num;
				list->addLast(num);
				break;
			case '@':
				cin >> num >> pos;
				list->addAt(num, pos);
				break;
			case 'r':
				cin >> num;
				cout << "Remove pos " << list->remove(num) << endl;
				break;
			case 'F':
				list->removeFirst();
				break;
			case 'L':
				list->removeLast();
				break;
			case 'g':
				cin >> num;
				cout << list->get(num) << endl;
				break;
			case 'p':
				list->print();
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while (op != 'x');
	return 0;
}
