#include <stdio.h>
#include <limits.h>

int main(){
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int cols=3, rows=3;
	int maxRowSumIndex = -1;
	int maxRowSum = INT_MIN;
	
	for(int i=0; i<rows; i++){
		int currRowSum = 0;
		for(int j=0; j<cols; j++){
			currRowSum += matrix[i][j];
		}
		if(currRowSum > maxRowSum){
			maxRowSum = currRowSum;
			maxRowSumIndex = i;
		}
	}
	printf("The index for maximum row sum is %d\n", maxRowSumIndex);

	return 0;
}
