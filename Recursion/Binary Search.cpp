#include <iostream>
using namespace std;

int binarySearch(int arr[], int tar, int st, int end){
	if(st <= end){
		int mid = st+(end-st)/2;
		if(arr[mid] == tar){
			return mid;
		}else if(arr[mid]>=tar){
			return binarySearch(arr, tar, st, mid-1);
		}else{
			return binarySearch(arr, tar, mid+1, end);
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int target = 3;
	int sz=10;
	int st=0, end=sz-1;
	cout<<"Target is at index :"<<binarySearch(arr, target, st, end);
	
	
	return 0;
}
