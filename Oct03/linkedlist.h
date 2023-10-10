#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List {
	node *head, *tail;
	int size;
	
	void addBetween(int num, node* pred, node* succ) {
		node* n = (node*) malloc( sizeof(node) );
		n->elem = num;
		n->prev = pred;
		n->next = succ;
		
		pred->next = n;
		succ->prev = n;
		
		size++;
	}
	
	// 1. Implement removeNode
	void removeNode(node* n) {
		node* pred = n->prev;
		node* succ = n->next;
		pred->next = succ;
		succ->prev = pred;
		free(n);
		size--;
	}
	// 2. Redesign remove(int num) using removeNode
	// TIME REMAINING: 00:0000000000000000000000000
	
public:
	LinkedList() {
		cout << "HI" << endl;
		head = (node*) calloc( 1, sizeof(node) );
		tail = (node*) calloc( 1, sizeof(node) );
		head->next = tail;
		tail->prev = head;
		size = 0;
	}
	
	void addFirst(int num) {
		addBetween(num, head, head->next);
	}
	void addLast(int num) {
		addBetween(num, tail->prev, tail);
	}
	
	void removeFirst() {
		if (!head) {
			return;
		}
		head = head->next;
		if (head) {
			free(head->prev);
			head->prev = nullptr;
		} else {
			free(tail);
			tail = nullptr;
		}
		size--;
	}
	
	void removeLast() {
		if (!tail) {
			return;
		}
		tail = tail->prev;
		if (tail) {
			free(tail->next);
			tail->next = nullptr;
		} else {
			free(head);
			head = nullptr;
		}
		size--;
	}
	
	void add(int num) {
		addLast(num);
	}
	
	int remove(int num) {
		node* curr = head->next;
		int pos = 1;
		while (curr != tail) {
			if (curr->elem == num) { 
				removeNode(curr);
				return pos;
			}
			curr = curr->next;
			pos++;
		}
		return -1;
	}
	
	void addAt(int num, int pos) {
		// STEP 1: Iterate curr
		node* curr = head->next;
		int ctr = 1; 
		while (ctr != pos && curr != tail) {
			curr = curr->next;
			ctr++;
		}
		node* pred = curr->prev;
		node* succ = curr;
		addBetween(num, pred, succ);
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
	
	void print() {
    	node* curr;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else {
			cout << "From HEAD: ";
    		curr = head->next;
	    	while (curr != tail) {
	    		cout << curr->elem;
	    		if (curr->next != tail) {
	    			cout << " -> ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->next;
			}
			cout << endl << "From TAIL: ";
    		curr = tail->prev;
	    	while (curr != head) {
	    		cout << curr->elem;
	    		if (curr->prev != head) {
	    			cout << " <- ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->prev;
			}
			cout << endl;
		}
    }
	
//	void print() {
//		cout << "Size: " << size << endl;
//		node* curr = head;
//		cout << "From HEAD: ";
//		while (curr != NULL) {
//			cout << curr->elem << "->";
//			curr = curr->next;
//		}
//		curr = tail;
//		cout << endl << "From TAIL: ";
//		while (curr != NULL) {
//			cout << curr->elem << "->";
//			curr = curr->prev;
//		}
//		cout << endl;
//	}
};
