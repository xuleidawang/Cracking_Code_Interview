#include <iostream>
struct queueNode
{
	queueNode(int _v){this-> val = _v;}
	int val;
	queueNode* next;
};

class myQueue{
	queueNode* first;
	queueNode* last;
public:
	void push(int val);
	int pop();
	bool isEmpty();
};

void myQueue::push(int val){
	queueNode* a = new queueNode(val);
	if(last){
		last->next =a;
		last = a;
	}else{
		first = a;
		last = a;
	}
}

int myQueue::pop(){
	int  ret;
	if(first){
		ret = first->val;
		first = first->next;
	}
	return ret;
}

bool myQueue::isEmpty(){
	return first==nullptr;
}

int main(){
	myQueue q;
	q.push(2);
	q.push(3);
	q.push(4);
	std::cout<<q.pop();



	return 0;
}