#include <iostream>
#include <vector>
#include "Tree.h"
using namespace std;

Node* createMinimalBST(vector<int> arr, int start, int end){
	if(end<start)return nullptr;

	int mid= (start+end)/2;
	Node* n = new Node(arr[mid]);
	n->left = createMinimalBST(arr, 0,mid-1);
	n->right = createMinimalBST(arr,mid+1,end);

	return n;
}
Node* minimalTree(vector<int> arr){
	return createMinimalBST(arr, 0, arr.size()-1);
}





int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);

	std::cout<<minimalTree(arr)->val<<std::endl;


	return 0;

}