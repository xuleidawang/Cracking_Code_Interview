#include <iostream>
#include "Tree.h"


bool checkBST(Node* node, int  min, int  max){
	if(node==nullptr)return true;
	if((min!=NULL&& node->val<min) || (max!=NULL&&node->val >max))return false;
	if(!checkBST(node->left,min, node->val) || !checkBST(node->right,node->val, max))
		return false;
	return true;

}
bool checkBST(Node* root){
	return checkBST(root, NULL, NULL);
}




int main()
{
	Node* root = new Node(5);
	root ->left = new Node(4);
	root ->right = new Node(6);
	root->left->right = new Node(7);
	std::cout<< checkBST(root)<<std::endl;;
	/* code */
	return 0;
}