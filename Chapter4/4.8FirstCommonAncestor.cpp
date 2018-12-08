#include <iostream>
#include "Tree.h"
using namespace std;




bool covers(Node* root, Node* q){
	if(!root)return false;
	if(root==q)return true;
	return covers(root->left,q) || covers(root->right,q);
}
Node* ancestorHelper(Node* root, Node* p, Node* q){
	if(root==nullptr||root==p || root ==q)
		return root;

	bool pIsLeft = covers(root->left,p);
	bool qIsLeft = covers(root->left,q);

	if(pIsLeft!=qIsLeft)return root;

	Node* childSide = pIsLeft?root->left:root->right;
	return ancestorHelper(childSide,p,q);
}



Node* commonAncestor(Node* root, Node* p, Node* q){
	if(!covers(root,p) || !covers(root,q))
		return nullptr;
	return ancestorHelper(root, p, q);
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}