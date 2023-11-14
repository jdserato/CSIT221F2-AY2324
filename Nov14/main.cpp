#include <iostream>
#include <stdexcept>
#include "mybintree.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree* tree = new MyBinaryTree();
	node* fifty = tree->addRoot(50);
	try {
		tree->addRoot(40);
	} catch (exception& e) {
		cout << e.what();
	} 
	node* thirty = tree->addLeft(fifty, 30);
	tree->addLeft(thirty, 20);
	tree->print();
	return 0;
}
