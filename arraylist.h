#include <iostream>
#include "list.h"
using namespace std;

class ArrayList : public List {
//	int array[5];
    int* array;
	int count = 0;
	int capacity;
	
	public:
	ArrayList() {
		capacity = 5;
		array = (int*) calloc( capacity , sizeof(int) );
		cout << "Address of our array is " << array << endl;
	}
		
	void add(int num) {
		cout << "Trying to add " << num << endl;
		if (count >= capacity) {
			capacity *= 1.5;
			array = (int*) realloc(array, capacity * sizeof(int) );
			cout << "Capacity: " << capacity << endl;
		cout << "Address of our array is " << array << endl;
		} 
		array[count] = num;
		count++;
	}
	
	// when the number of elements reach 2/3 of the capacity, 
	// you are to reallocate the array by reducing its size by 25%, 
	// Add the functionality to maintain a minimum capacity of 5.
	// Determine after which line AFTER you want to insert your code
	int remove(int num) {
		for (int i = 0; i < count; i++) {
			if (array[i] == num) {
                for (int j = i; j < count-1; j++) {
                	array[j] = array[j+1];
				}
				array[count-1] = 0;
				count--;
				if (capacity > 5 && count <= (2.0/3) * capacity) {
					capacity *= 0.75;
					if (capacity < 5) {
						capacity = 5;
					}
					array = (int*) realloc(array, capacity * sizeof(int) );
				}
				return i+1;
			}
		}
		return -1;
	}
	// TIME REMAINING: 00:00 minute 
	void print() {
		cout << "Size: " << count << endl;
		for (int i = 0; i < capacity; i++) {
			cout << array[i] << ", ";
		}
		cout << endl;
	}
};
