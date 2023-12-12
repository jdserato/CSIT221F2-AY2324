#include <iostream>
#include "arrayheap.h"
using namespace std;
int main() {
	Heap* heap = new ArrayHeap();
	char op;
	int n;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'i':
				cin >> n;
				heap->insert(n);
			case 'p':
				heap->print();
				break;
			case 'r':
				cout << "Removed " << heap->removeMin() << endl;
				break;
		}
	} while (op != 'x');
	return 0;
}
