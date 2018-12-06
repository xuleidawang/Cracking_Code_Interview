#include <iostream>
#include <stack>

using namespace std;

template<typename T>
class myQueue {

	stack<T> StackNew, StackOld;
public:
	myQueue(){
		StackNew = stack<T>();
		StackOld = stack<T>();
	}


	int size(){
		return StackNew.size() + StackOld.size();
	}

	void add(T value){
		StackNew.push(value);
	}

	//Move elements from stackNew to stackOld.
	void shiftStacks(){
		if(StackOld.isEmpty()){
			while(!StackNew.isEmpty()){
				StackOld.push(StackNew.top());
				StackNew.pop();
			}
		}
	}

	T peek(){
		shiftStacks();
		return StackOld.top();
	}

	T remove(){
		shiftStacks();
		T ret = StackOld.top();
		StackOld.pop();
		return ret;
	}

};


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}