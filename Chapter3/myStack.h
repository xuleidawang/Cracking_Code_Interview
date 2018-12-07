#include <iostream>  

using namespace std; 
 
#define MAX 1000 
class myStack 
{ 
	int top; 
public: 
	int a[MAX];    //Maximum size of Stack 
	myStack()  { top = -1; } 
	bool push(int x); 
	int pop(); 
	bool isEmpty(); 
}; 
  
bool myStack::push(int x) 
{ 
    if (top >= (MAX-1)) 
    { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else
    { 
        a[++top] = x; 
        return true; 
    } 
} 
  
int myStack::pop() 
{ 
    if (top < 0) 
    { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else
    { 
        int x = a[top--]; 
        return x; 
    } 
} 
  
bool myStack::isEmpty() 
{ 
    return (top < 0); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    myStack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout<<s.pop() << " Popped from stack\n"; 
  
    return 0; 
} 