#include "heap.h"
#include "../arraylist.h"
class ArrayHeap : public Heap {
	ArrayList* list;
	
	public:
	ArrayHeap() {
		list = new ArrayList();
	}
	
	void insert(int num) {
		list->add(num);
		int curr_ind = list->size()-1;
		int par_ind = (curr_ind-1) / 2;
		while (list->get(curr_ind+1) < list->get(par_ind+1)) {
			list->swap(curr_ind, par_ind);
			curr_ind = par_ind;
			par_ind = (curr_ind-1) / 2;
		}
	}
	int removeMin() {
		
	}
	void print() {
		list->print();
	}
};
