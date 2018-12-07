#include <iostream>

struct Node
{
	int val;
	Node *left, *right;
	Node(int v){val = v; left=nullptr;right=nullptr;}

};