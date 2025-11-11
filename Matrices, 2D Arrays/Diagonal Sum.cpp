#include <iostream>
using namespace std;

int main(){
	// Diagonal Sum
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	}
	, cols=3, rows=3;
	int primaryDSum = 0;
	int secondaryDSum = 0;
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			if(i==j){
				primaryDSum += matrix[i][j];
			}else if(j== cols-i-1){
				secondaryDSum+=matrix[i][j];
			}
		}
	}
	cout<<primaryDSum+secondaryDSum;

	return 0;
}
