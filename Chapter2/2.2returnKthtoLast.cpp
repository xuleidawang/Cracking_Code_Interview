#include<iostream>
using namespace std;
struct Node
{
	Node* next;
	int val;
	Node(){next = nullptr; val=-1;}
	Node(int i){val =i;next = nullptr;}
};


Node* nthToLast(Node* head, int k){
	Node* p1 = head;
	Node* p2 = head;
	for(int i=0;i<k;i++)
	{
		if(p1==nullptr)return nullptr;
		p1 = p1->next;
	}

	while(p1){
		p1 = p1->next;
		p2 = p2->next;
	}
	return p2;
}



int main(){
	Node* p = new Node(2);
	p->next = new Node(3);
	cout<<nthToLast(p,1)->val<<endl;
	return 0;
}