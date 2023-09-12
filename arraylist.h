#include <iostream>
#include "list.h"
using namespace std;

class ArrayList : public List {
	int array[5];
	int count = 0;
	
	public:
	void add(int num) {
		cout << "Trying to add " << num << endl;
		if (count < 5) {
			array[count] = num;
			count++;
		} else {
			cout << "PUNO NA" << endl;
		}
	}
	
	int remove(int num) {
		// Step 1: Find the num
		for (int i = 0; i < count; i++) {
			if (array[i] == num) {
                // Step 2: MOVE the elements to left
                for (int j = i; j < count-1; j++) {
                	array[j] = array[j+1];
				}
				array[count-1] = 0;
				count--;
				return i+1;
			}
		}
		return -1;
	}
	
	void print() {
		cout << "Size: " << count << endl;
		for (int i = 0; i < count; i++) {
			cout << array[i] << ", ";
		}
		cout << endl;
	}
};
