#include <iostream>

#include "BinaryTree.h"
using namespace std;

int main()
{
	try
	{
		BinaryTree tree;
		tree.add(30);
		tree.add(10);
		tree.add(1);
		tree.add(4);
		tree.add(8);
		tree.add(6);
		tree.add(5);
		tree.add(7);
		tree.add(25);
		tree.add(28);
		tree.add(27);
		tree.add(29);
		tree.add(26);
		tree.add(50);
		tree.add(34);
		tree.add(100);
		tree.add(150);
		tree.add(45);
		tree.add(41);
		tree.add(48);
		tree.print(5, 10);
		return 0;
	}
	catch (const exception& ex)
	{
		cout << endl << "Error: " << ex.what() << endl;
	}
	return 0;
}
