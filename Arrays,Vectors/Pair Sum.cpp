#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9}, sz=9;
	int target;
	cout<<"Enter target:";
	cin>>target;
	
	for(int i=0; i<sz; i++){
		for(int j=i; j<sz; j++){
			if(arr[i]+arr[j] == target){
				cout<<arr[i]<<", "<<arr[j]<<endl;
				return 1;
			}
		}
	}
	
	
	// BETTER APPROACH TO DO THIS
	int arr[] = {1,2,3,4,5,6,7,8,9}, sz=9;
	int target;
	cout<<"Enter target:";
	cin>>target;
	int start=0, end=sz-1;
	
	while(start < end){
		if(arr[start] + arr[end] < target){
			start++;
		}
		else if(arr[start] + arr[end] > target){
			end--;
		}
		else{
			cout<<arr[start]<<", "<<arr[end]<<endl;
			start++;
			end--;
		}
	}
	
	return 0;
}
