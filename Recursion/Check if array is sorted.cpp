#include <iostream>
using namespace std;

bool check(int arr[], int n){
	if(n==0 || n==1){
		return true;
	}
	return arr[n-1]>=arr[n-2] && check(arr, n-1);
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n=10;
	if(check(arr,n)){
		cout<<"Array is sorted";
	}else{
		cout<<"Array is not sorted";
	}
	
	
	return 0;
}
