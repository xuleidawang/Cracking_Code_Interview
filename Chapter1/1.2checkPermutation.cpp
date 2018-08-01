// Given two strings, write a method to decide if one is a permutation of the other

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool checkPermutation(string s1, string s2){
	if(s1.length()!=s2.length())return false;
	vector<int> characters(256,0);
	for(char c:s1)
		characters[c]++;

	for(char c:s2){
		characters[c]--;
		if(characters[c]<0)return false;
	}
	return true;
}


int main(int argc, char* argv[]){
	cout<<checkPermutation(argv[1],argv[2])<<endl;
	return 0;
}