#include <iostream>
#include "singlyqueue.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Queue* queue = new SinglyQueue();
	int num;
	char op;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'e':
				cin >> num;
				queue->enqueue(num);
				break;
			case 'd':
//				if ( queue->isEmpty() ) {
//					cout << "Queue is empty." << endl;
//				} else {
//					cout << "Removed " << queue->dequeue() << endl;
//				}
				queue->isEmpty() ? cout << "Queue is empty." << endl : cout << "Removed " << queue->dequeue() << endl;
//				cout << "Removed " << queue->dequeue() << endl;
				break;
			case 'f':
				cout << "First " << queue->first() << endl;
				break;
			case 's':
				cout << "Size: " << queue->size() << endl;
				break;
			case '?':
				cout << "IsEmpty? " << queue->isEmpty() << endl;
				break;
			case 'p':
				queue->print();
				break;
			case 'x':
				cout << "Exiting";
				break;
		}
	} while (op != 'x');
	return 0;
}
