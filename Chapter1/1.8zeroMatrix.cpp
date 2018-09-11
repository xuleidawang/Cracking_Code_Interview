/*
write an algorithm such that if an element in an M*M matrix is 0, its entire row and column are set to 0
*/


#include<iostream>
#include<vector>
using namespace std;

void nullifyRow(vector<vector<int> >& matrix,int index){
	for(int i=0;i<matrix.size();i++){
		matrix[index][i]=0;
	}
}

void nullifyCol(vector<vector<int> >& matrix,int index){
	for(int i=0;i<matrix.size();i++)
		matrix[i][index]=0;
}


void zeroMatrix(vector<std::vector<int> > matrix){
	int m = matrix.size();
	bool firstRow = false, firstCol = false;
	for(int i=0;i<m;i++){
		if(matrix[0][i]==0){
			firstRow = true;
			break;
		}
	}
	for(int j=0;j <m;j++){
		if(matrix[j][0]==0)
		{
			firstCol = true;
			break;
		}	
	}
	for(int i = 1;i<m;i++)
	{

		for(int j=1; j<m;j++){
			if(matrix[i][j] ==0)
			{
				matrix[i][0]=0;
				matrix[0][j]=0;
			}
		
		}
	}

	if(firstRow)nullifyRow(matrix,0);
	if(firstCol)nullifyCol(matrix,0);
	for(int i=1;i<m;i++){
		if(matrix[i][0]==0)
			nullifyRow(matrix,i);
		if(matrix[0][i]==0)
			nullifyCol(matrix,i);
	}


}


int main(int argc, char** argv){



	return 0;
}