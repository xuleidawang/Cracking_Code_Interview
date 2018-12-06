// Create a data structure kStacks that represents k stacks. Implementation of kStacks should use only one array, 
//i.e., k stacks should use the same array for storing elements. Following functions must be supported by kStacks.

// push(int x, int sn) –> pushes x to stack number ‘sn’ where sn is from 0 to k-1
// pop(int sn) –> pops an element from stack number ‘sn’ where sn is from 0 to k-1

// Following are the two extra arrays are used:
// 1) top[]: This is of size k and stores indexes of top elements in all stacks.
// 2) next[]: This is of size n and stores indexes of next item for the items in array arr[].
//Here arr[] is actual array that stores k stacks.
// Together with k stacks, a stack of free slots in arr[] is also maintained. The top of this stack is stored in a variable ‘free’.

// All entries in top[] are initialized as -1 to indicate that all stacks are empty. 
//All entries next[i] are initialized as i+1 because all slots are free initially and pointing to next slot. Top of free stack, ‘free’ is initialized as 0.

#include <iostream>
using namespace std;

class kStack{
	int *arr;
	int *top;
	int *next;
	int n, k ;

	int free; //To store beginning of free list

public:
	kStack(int k, int n);
	bool isFull(){return free==-1;}

//To push an item in stack number "sn", where sn from 0 to k-1
	void push(int item, int sn);

	int pop(int sn);

	bool isEmpty(int sn){return top[sn]==-1;}

};

kStack::kStack(int k1,int n1):k(k1), n(n1){
	arr = new int[n];
	top = new int[k];
	next = new int[n];

	//initialize all stack as empty
	for(int i=0;i<k;i++)
		top[i] = -1;

	//initialize all space as free
	free = 0;
	for(int i=0;i<n-1;i++)
		next[i]=i+1;
	next[n-1]=-1;

}


void kStack::push(int item, int sn){
	//Overflow check
	if(isFull()){
		std::cout<<"Stack Overflow\n";
		return;
	}

	int i=free;

	free = next[i];

	//update next of top and then top for stack number 'sn'
	next[i] = top[sn];
	top[sn] = i;

	arr[i] = item;

}

int kStack::pop(int sn){
	if(isEmpty(sn)){
		std::cout<<"Stack Underflow\n";
		return INT_MAX;
	}

	int i = top[sn];
	top[sn] = next[i];

	//Attach the previous top to the beginning of free list
	next[i] = free;
	free = i;

	return arr[i];
}

int main(){
	 int k = 3, n = 10; 
    kStack ks(k, n); 
  
    // Let us put some items in stack number 2 
    ks.push(15, 2); 
    ks.push(45, 2); 
  
    // Let us put some items in stack number 1 
    ks.push(17, 1); 
    ks.push(49, 1); 
    ks.push(39, 1); 
  
    // Let us put some items in stack number 0 
    ks.push(11, 0); 
    ks.push(9, 0); 
    ks.push(7, 0); 
  
    cout << "Popped element from stack 2 is " << ks.pop(2) << endl; 
    cout << "Popped element from stack 1 is " << ks.pop(1) << endl; 
    cout << "Popped element from stack 0 is " << ks.pop(0) << endl; 

	return 0;
}

