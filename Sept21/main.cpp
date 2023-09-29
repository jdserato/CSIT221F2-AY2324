#include <iostream>
#include "scoreboard.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	entry player1;
	Scoreboard* board = new Scoreboard();
	char op;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin.ignore();
				cout << "Enter name: ";
				getline(cin, player1.name);
				cout << "Enter country: ";
				getline(cin, player1.country);
				cout << "Enter score: ";
				cin >> player1.score;
				cout << board->add(player1) << endl;
				break;
			case 'p':
				board->print();
				break;
		}
	} while (op!= 'x');
	
	return 0;
}
