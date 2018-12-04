#include<iostream>
#include<unordered_set>
using namespace std;
struct Node
{
	Node* next;
	int val;
	Node(){next = nullptr; val=-1;}
	Node(int i){val =i;next = nullptr;}
};


bool deleteNode(Node* n){
	if(!n|| !n->next) return false;
	Node* n1 = n->next;
	n->val = n1->val;
	n->next = n1->next;
	return true;
}

int main(){

	return 0;
}