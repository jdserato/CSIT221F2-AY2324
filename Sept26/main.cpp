#include <iostream>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	List* list = new LinkedList();
	int num;
	char op;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> num;
				list->add(num);
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
