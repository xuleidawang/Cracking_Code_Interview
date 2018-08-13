#include<iostream>
#include<string>
using namespace std;

bool isOneAway(string s1, string s2){
	if(s1==s2)return true;
	if(abs(s1.length()-s2.length()>1))return false;

	if(s1.length()==s2.length()){
		bool dif = false;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i]){
				if(dif)return false;
				else dif = true;
			}
		}
		return true;
	}
	else{

		for(int i=0;i<min(s1.length(),s2.length());i++){
			if(s1[i]!=s2[i]){
				if(s1.length()<s2.length())
				{
					s2.erase(s2.begin()+i);
					return s2==s1;
					
				}
				else
				{
					s1.erase(s1.begin()+i);
					return s1==s2;
				}
			}

		}
		return true;
	}

}


int main(int argc, char** argv){
	cout<<isOneAway("ale", "dlea")<<endl;


	return 0;
}