#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

bool isPalinPermu(string s){
	int dic[27]={0};
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int countOdd;

	for(char c:s)
	{
		if(c==' ')continue;
		dic[c-'a']++;
		if(dic[c-'a']%2==1)
			countOdd++;
		else 
			countOdd--;
		
	}

	return countOdd<=1;

}

int main(){
	std::cout<< isPalinPermu("ab bcc")<<endl;
	return 0;
}