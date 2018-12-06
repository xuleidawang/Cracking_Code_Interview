#include<iostream>
#include<stack>
using namespace std;



void sortStack(stack<int> s){
	stack<int> r = stack<int>();

	while(!s.empty()){
		//insert each element in s in sorted order into r 
		int tmp = s.top();
		s.pop();
		while(!r.empty()&&r.top()>tmp){
			int i = r.top();
			s.push(r.top());
			r.pop();
		}

		r.push(tmp);
	}

	while(!r.empty()){
		s.push(r.top());
		r.pop();
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}