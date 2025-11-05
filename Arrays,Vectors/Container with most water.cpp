#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> arr={1,8,6,2,5,4,8,3,7}
	
	// BRUTE FORCE APPROACH
	int waterArea;
	for(int i=0; i<arr.size(); i++){
		int currWaterArea = 0;
		for(int j=i+1; j<arr.size(); j++){
			int width = j-i;
			currWaterArea = min(arr[i],arr[j]) * width;
			if(currWaterArea > waterArea){
				waterArea = currWaterArea;
			}
		}	
	}
	cout<<waterArea<<endl;

	// TWO-POINTER APPROACH
	int waterArea = 0;
	int start=0, end=arr.size()-1;
	while(start<end){
		int currWaterArea = (end - start)* min(arr[start],arr[end]);
		if(arr[start] > arr[end]){
			end--;
		}else{
			start++;
		}
		if(currWaterArea > waterArea){
			waterArea = currWaterArea;
		}
	}
	cout<<waterArea<<endl;
	
	return 0;
}
