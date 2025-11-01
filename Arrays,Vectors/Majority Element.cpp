#include <iostream>
using namespace std;

int main(){
	//	 BY BRUTE FORCE
	int arr[] = {1,2,1,2,2,5,5,5,5,5,5}, sz=11;
	int freq;
	for(int i=0; i<sz; i++){
		freq=0;
		for(int j=i; j<sz; j++){
			if(arr[i] == arr[j]){
				freq++;
			}
		}
		if(freq > sz/2){
			cout<<"Majority element is :"<<arr[i]<<endl;
			break;
		}
	}

	// SLIGHTLY BETTER APPROACH (with sorted array)
	// int arr[] = {1,1,2,2,2,5,5,5,5,5,5}, sz=11;
	int freq=1, ans=arr[0];
	for(int i=1; i<sz; i++){
		if(arr[i] == arr[i-1]){
			freq++;
		}else{
			freq=1;
			ans=arr[i];
		}
		if(freq>sz/2){
			cout<<"Majority element is :"<<ans<<endl;
			break;
		}
	}


	// BY MOORE'S ALGORITHM
	// int arr[] = {1,2,1,2,2,5,5,5,5,5,5}, sz=11;
	int freq = 0;
	int ans = 0;
	for(int i=0; i<sz; i++){
		if(freq == 0){
			ans = arr[i];
		}
		if(arr[i] == ans){
			freq++;
		}
		else{
			freq--;
		}
	}
	cout<<"Majority element is :"<<ans<<endl;
  return 0;
}
