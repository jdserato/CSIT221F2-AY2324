#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List {
	node *head, *tail;
	int size;
	
public:
	void addLast(int num) {
		// STEP 1: Create node n
		node* n = new node;
		n->elem = num;
		n->next = NULL;
		// STEP 2: Connect tail to n
		if (tail) {
			tail->next = n;
		} else {
			head = n;
		}
		// STEP 3: Reassign tail
		tail = n;
		// STEP 4: Update size
		size++;
	}
	
	void add(int num) {
		addLast(num);
	}
	
	int removeFirst() {
		// Step 1: Check first if naa kay head
		if (!head) {
			return -1;
		}
		// Step 2: Store into temp
		int tmp = head->elem;
		// Step 3: Have another pointer
		node* n = head;
		// Step 4: Set head to next
		head = head->next;
		
		// Step 5: Free prev head 
		free(n);
		size--;
		if (size == 0) {
			tail = head;
		}
		// Step 6: Return tmp
		return tmp;
	}
	
	int remove(int num) {
	
	}
	
	int get(int pos) {
		node* curr = head;
		int ctr = 1;
		while (ctr != pos) {
			curr = curr->next;
			ctr++;
		}
		return curr->elem;
	}
	
	int getSize() {
		return size;
	}
	
	void print() {
		cout << "Size: " << size << endl;
		node* curr = head;
		while (curr != NULL) {
			cout << curr->elem << " @" << curr << endl;
			curr = curr->next;
		}
		cout << endl;
	}
};
