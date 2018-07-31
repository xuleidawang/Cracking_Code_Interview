// Implement an algorithm to determine if a string has all unique characters.
// What if no additional data strutures?


#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isUnique(string s){
	vector<int> cnt(256,0);
	for(char c:s){
		if(cnt[c]++>0)return false;
	}
	return true;
}

int main(int argc, char* argv[]){
	cout<<isUnique(argv[1])<<endl;
	return 0;
}