// You have an interger and you can flip one bit from 0 to 1.
// Write code to find the length of the longest sequence of 1s you could create
#include<iostream>

using namespace std;


int flipBits(int a){
	int curLen = 0, preLen = 0;
	int maxLen = 1;

	while(a!=0){
	//current bit is 1	
		if((a&1)==1){
			curLen++;
		}else if((a&1)==0){//current bit is 0 
			//if next bit is 0, update preLen to 0, since there are two consecvutive 0s;
			//else update preLen = curLen;
			preLen = (a&2)==0?0:curLen;
			curLen= 0;
		}
		maxLen = max(preLen+curLen+1,maxLen);
		a>>= 1;
	}
	return maxLen;
}




int main(int argc, char const *argv[])
{
	/* code */


	std::cout<<flipBits(1023)<<endl;
	return 0;
}