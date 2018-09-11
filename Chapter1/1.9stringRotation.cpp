//Assume you have a method "isSubstring" which checks if one word is a substring of another. 
//Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring 


#include<iostream>
#include<string>

using namespace std;

bool isSubstring(string s1, string s2){
	return true;
}

bool isRotation(string s1, string s2){
	int len = s1.length();
	if(len >0 && s2.length()==len){
		return isSubstring(s1+s1,s2);
	}
	return false;
}


int main(int argc, char** argv){



	return 0;
}