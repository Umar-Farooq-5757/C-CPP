#include <iostream>
using namespace std;

int main(){
	int arr[] = {6,7,8,9,0,1,2,3,4,5}, sz=10;
	
	int st=0, end=sz-1;
	int target = 5;
	while(st<=end){
		int mid = st + (end-st)/2;
		if(arr[mid] == target){
			cout<<"Target is at index "<<mid;
			break;
		}
		else if(arr[st] <= arr[mid]){ // left sorted
			if((arr[st] <= target) && (arr[mid] > target)){
				end = mid-1;
			}else{
				st = mid+1;
			}
		}
		else{ // right sorted
			if((arr[mid] < target) && arr[end] >= target){
				st = mid+1;
			}else{
				end = mid-1;
			}
		}
	}
	
	return 0;
}
