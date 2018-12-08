#include <iostream>
#include "Tree.h"
using namespace std;
int getHeight(Node* root){
	if(root==nullptr)return -1;
	return max(getHeight(root->left),getHeight(root->right))+1;
}


bool isBalanced(Node* root){
	if(root==nullptr)return true;
	int left = getHeight(root->left);
	int right = getHeight(root->right);

	if(abs(left-right)>1)return false;
	return isBalanced(root->left)&&isBalanced(root->right);
}


int checkHeight(Node* node){
	if(node==nullptr)return -1;
	int left = checkHeight(node->left);
	if(left == INT_MIN)return INT_MIN;
	int right = checkHeight(node->right);
	if(right ==INT_MIN)return right;

	if(abs(left-right)>1)return INT_MIN;
	else return max(left,right)+1;
}


bool balanded(Node* root){
	return checkHeight(root)!=INT_MIN;
}







int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}