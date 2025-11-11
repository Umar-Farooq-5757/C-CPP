#include <iostream>
using namespace std;

bool searchInMidRow(int matrix[3][3], int target,int row, int n){
	// Find the target in the correct row
	int st = 0, end = n-1;
	while(st<=end){
		int mid = st+(end-st)/2;
		if(target == matrix[row][mid]){
			return true;
		}
		else if(target < matrix[row][mid]){
			end = mid -1;
		}else{
			st = mid+1;
		}
	}
	return false;
}

int main(){
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{23,34,99}
	};
	int m =3;
	int n =3;
	int target = 34;
	
	// First, find the row in which target exists
	int stRow = 0, endRow = m-1;
	while(stRow <= endRow){
		int midRow = stRow + (endRow-stRow)/2;
		if((target >= matrix[midRow][0]) && (target <= matrix[midRow][n-1])){
			if(searchInMidRow(matrix, target, midRow,n)){
				cout<<"The element "<<target<<" exists in this matrix.";
			}else{
				cout<<"The element "<<target<<" does not exist in this matrix.";
			}
			break;
		}
		else if(target <= matrix[midRow][0]){
			endRow = midRow - 1;
		}else{
			stRow = midRow + 1;
		}
	}
	
	return 0;
}
