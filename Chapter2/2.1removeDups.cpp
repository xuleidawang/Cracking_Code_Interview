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



void removeDups(Node* node){
	unordered_set<int> s;
	Node* pre = nullptr;
	while(node!=nullptr){
		if(s.find(node->val)!=s.end()){
			pre->next = node->next;
		}else{
			s.insert(node->val);
			pre = node;
		}
		node = node->next;
	}
}


int main(){
	Node *a = new Node(2);
	a->next = new Node(2);
	a->next ->next =new Node(3);
	removeDups(a);
	while(a){
		cout<<a->val<<endl;
		a = a->next;
	}
	return 0;
}