#include <iostream>
#include "arraystack.h"
using namespace std;

int main() {
	Stack* stack = new ArrayStack();
	int n;
	char op;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin >> n;
				stack->push(n);
				break;
			case 'p':
				stack->print();
				break;
			case 'r':
				cout << "Removed " << stack->pop() << endl;
				break;
			case 't':
				cout << "Top: " << stack->top() << endl;
				break;
			case 's':
				cout << "Size: " << stack->size() << endl;
				break;
			case '?':
				cout << "IsEmpty? " << stack->isEmpty() << endl;
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
		
	} while (op != 'x');
	
	return 0;
}


