#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
	// Linear search
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, cols=3, rows=3;
	pair<int, int> result;
	int target = 8; // expected output: 2,1
	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			if(matrix[i][j] == target){
//				cout<<i<<" "<<j;
				result.first = i;
				result.second = j;
				break;
			}
		}
	}
	cout<<result.first<<" "<<result.second;
	return 0;
}
