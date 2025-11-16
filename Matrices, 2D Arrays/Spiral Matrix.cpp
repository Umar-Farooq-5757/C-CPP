#include <iostream>
using namespace std;

int main(){
	// SPIRAL MATRIX
	int matrix[5][5] = {
		{1,  2,  3,  4,  5},
		{16, 17, 18, 19, 6},
		{15, 24, 25, 20, 7},
		{14, 23, 22, 21, 8},
		{13, 12, 11, 10, 9},
	};
	int n = 5; // rows
	int m = 5; // columns
	int strow = 0,   stcol=0;
	int endrow= n-1, endcol=m-1;
	
	while((strow <= endrow) && (stcol<=endcol)){
		for(int i=stcol; i<=endcol; i++){
			cout<<matrix[strow][i]<<", ";
		}
		for(int i=strow+1; i<=endrow; i++){
			cout<<matrix[i][endcol]<<", ";
		}
		for(int i=endcol-1; i>=stcol; i--){
			cout<<matrix[endrow][i]<<", ";
		}
		for(int i=endrow-1; i>=strow+1; i--){
			cout<<matrix[i][stcol]<<", ";
		}
		strow++;
		endrow--;
		stcol++;
		endcol--;
	}
	
	
	return 0;
}
