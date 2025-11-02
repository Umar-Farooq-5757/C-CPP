#include <iostream>
using namespace std;

int main(){
	int arr[] = {2,1,0,0,0,2,2,1,1,2,0}, sz=11;
	int st=0, end=sz-1;

	int zeroCount = 0;
	int oneCount = 0;
	int twoCount = 0;
	for(int i=0; i<sz; i++){
		if(arr[i] == 0){
			zeroCount++;
		}else if(arr[i] == 1){
			oneCount++;
		}else{
			twoCount++;
		}
	}
	
	for(int i=0; i<zeroCount; i++){
		arr[i] = 0;
	}
	for(int i=0; i<oneCount; i++){
		arr[zeroCount+i] = 1;
	}
	for(int i=0; i<twoCount; i++){
		arr[zeroCount+oneCount+i] = 2;
	}
	cout << "Sorted array: ";
	for(int i=0; i<sz; i++){
		cout << arr[i] << (i == sz - 1 ? "" : ", ");
	}
	cout << endl;




		// DUTCH NATIONAL FLAG ALGORITHM
		int arr[] = {2,1,0,0,0,2,2,1,1,2,0}, sz=11;
		int low=0,mid=0,high=sz-1;
		
		while(mid<=high){
			if(arr[mid] == 0){
				swap(arr[low],arr[mid]);
				mid++;
				low++;
			}
			else if(arr[mid] == 1){
				mid++;
			}else{
				swap(arr[mid],arr[high]);
				high--;
			}
		}
			cout << "Sorted array: ";
	for(int i=0; i<sz; i++){
		cout << arr[i] << (i == sz - 1 ? "" : ", ");
	}
	cout << endl;
		
		
	return 0;
}
