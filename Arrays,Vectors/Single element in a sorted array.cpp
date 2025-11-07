#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,1,2,2,3,3,4,4,5,5,23},n=11;
	
	int elToFound;	
	for(int i=0; i<n; i++){
		if((arr[i] != arr[i-1]) && (arr[i] != arr[i+1])){
			elToFound = arr[i];
			break;
		}
	}
	cout<<"Single element in this array is "<<elToFound<<endl;
	
	// USING BINARY SEARCH (optimized)
	int start=0, end=n-1;
	int elToFound;
	while(start<=end){
		int mid = start + (end-start)/2;
		if((arr[mid] != arr[mid-1]) && arr[mid]!=arr[mid+1]){
			elToFound = arr[mid];
			break;
		}else if(mid%2 == 0){
			if(arr[mid] == arr[mid-1]){
				end = mid -1;
			}else{
				start = mid+1;
			}
		}else{
			if(arr[mid] == arr[mid-1]){
				start = mid+1;
			}else{
				end = mid-1;
			}
		}
		
	}
	cout<<"Single element in this array is "<<elToFound<<endl;
	
	return 0;
}
