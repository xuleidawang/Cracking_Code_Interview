#include <iostream>
#include <deque>
class MinStack {
 public:   
    std::deque<std::pair<int, int> > stack;
    MinStack() {
    }
    void push(int x) {
        int currentMin = stack.empty() ? INT_MAX : stack.back().second;
        stack.push_back(std::pair<int, int>(x, std::min(x, currentMin)));
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;
    }
   
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

int main(int argc, char const *argv[])
{ 
	MinStack obj = MinStack();
 	obj.push(2);
 	obj.push(3);
 	obj.push(4);
 	obj.push(5);
  	obj.pop();
  	int param_3 = obj.top();
  	int param_4 = obj.getMin();
	
	return 0;
}