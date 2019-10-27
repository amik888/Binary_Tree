#include "Binary_Tree.h"
#include <iostream>

using namespace std;

int main()
{
	vector<string> integers { "1", "5", "19"};
	Binary_Tree<string> integer_tree;
	integer_tree.read_tree(integers);
	cout << integer_tree.sum_of_nodes();
}
