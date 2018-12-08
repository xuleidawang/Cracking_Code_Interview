// You are given two 32-bits numbers, N and M , two bit pos i and j.
// Write a method to inset M s.t. M starts at bit j and ends at bit i.


#include <iostream>

using namespace std;

int update(int n, int m , int i, int j){
	//create a mask to clear bits i through j in N.  eg. i=2, j=4  

	int allOnes = ~0;

	int left = allOnes << (j+1);
	int right = ((1<<i) -1);

	int mask = left | right;

	//clear bits j through i then put m there.
	int n_cleared = n& mask;
	int m_shifted = m<<i;

	return n_cleared | m_shifted;
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}