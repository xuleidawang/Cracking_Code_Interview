#include <iostream>
#include <string>
#include "Tree.h"
using namespace std;

//Check if t2 is a subtree of t1.
void buildString(string& s, Node* node){
	if(node==nullptr){
		s.append("X");
		return;
	}
	s.append(to_string(node->val));
	buildString(s,node->left);
	buildString(s,node->right);

}



bool containsTree(Node* t1, Node* t2){
	string s1 ="", s2 = "";
	buildString(s1, t1);
	buildString(s2, t2);


	return (s1.find(s2) != std::string::npos);
   
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
