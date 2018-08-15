// Implement a method to perform basic string compression using the counts of repeated characters.
// For example, the string aabccccaaa should become a2b1c5a3. 
// You can assume the string only contains upper and lower case letters.
#include<iostream>
#include<string> 

using namespace std;
string strCompression(string s){
	string res;
	char cur = s[0];
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==cur && i!=s.length()-1){
			count++;
		}else{
			if(i==s.length()-1)count++;
			res+=cur;
			res+=to_string(count);
			count =1;
			cur = s[i];
		}
	}
	if(res.length()>=s.length())return s;
	else return res;
	
}


int main(int argc, char** argv){
	cout<< strCompression(argv[1])<<endl;
	return 0;
}