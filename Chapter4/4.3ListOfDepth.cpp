#include <iostream>
#include <queue>
#include "Tree.h"

using namespace std;

void recursice(vector<vector<int> >& res, Node* node, int level){
	if(level>=res.size())res.push_back(vector<int>());
	if(node!=nullptr){
		res[level].push_back(node->val);
		recursice(res, node->left,level+1);
		recursice(res, node->right, level+1);
	}
}


vector<vector<int> >& levelOrderTraversal(Node* root){
	vector<vector<int> > res(0,vector<int>());
	recursice(res, root, 0);
	return res;
}


int main(){

	return 0;
}