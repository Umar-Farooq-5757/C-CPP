#include <iostream>
using namespace std;

int main(){
	// TIME COMPLEXITY = O(n)
	int arr[] = {0,1,2,3,4,5,6,7,6,5,4,3,2,1}, sz=14;
	int index;
	for(int i=0; i<sz; i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			index = i;
			break;
		}
	}
	cout<<"Peak value is at index: "<<index<<endl;
	
	// TIME COMPLEXITY = O(log n)
	int arr[] = {0,1,2,3,4,5,6,7,6,5,4,3,2,1}, sz=14;
	int start = 1;
	int end = sz-2;
	while(start<=end){
		int mid = start + (end-start)/2;
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
			cout<<"Peak value is at index: "<<mid<<endl;
			break;
		}else if(arr[mid] > arr[mid-1]){
			start = mid+1;
		}else{
			end = mid-1;
		}
	}
	
	
	return 0;
}
