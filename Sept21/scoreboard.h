#include "entry.h"
#include <iostream>
using namespace std;
class Scoreboard {
	entry board[5];
	int size = 0;
	
	public:
	bool add(entry e) {
		int last;
		for (last = size - 1; last >= 0; last--) {
			entry* daan = &board[last];
			if (daan->score < e.score) {
				if (last+1 < 5) {
					board[last+1] = board[last];
				}
			} else {
				if (last+1 == 5) {
					return false;
				}
				break;
			}
		}
		board[last + 1] = e;
		if (size < 5) {
			size++;
		}
		return true;
	}
	
	void print() {
		for (int i = 0; i < 5; i++) {
			entry* e = &board[i];
			if (i >= size) {
				cout << i+1 << ". (none)" << endl;
			} else {
				cout << i+1 << ". " << e->name << " (" << e->country << ") - " << e->score << endl;
			}
		}
	}
};
