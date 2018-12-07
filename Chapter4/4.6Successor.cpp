#include <iostream>
#include "Tree.h"


Node* inorderSuccessor(Node* root, Node* p) {
	if (p->right) {
		p = p->right;
		while (p->left)
			p = p->left;
		return p;
	}
	Node* candidate = NULL;
	while (root != p){
		if(p->val>root->val)
			root = root->right;
		else{
			candidate = root;  
            root =root->left;
        }
    }
    return candidate;
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}