#include <iostream>

using namespace std;

int main() {
    // PRINTING ALL THE SUBARRAYS
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10,11,12,13}, sz = 13;
    for (int i = 0; i < sz; i++) {
        for (int j = i; j < sz; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }


    // MAXIMUM SUBARRAY SUM BY BRUTEFORCE APPROACH
   int arr[] = {1, 2, 3, 4, 5}, sz = 5;
   int maxSum = INT_MIN;
   int currSum;
   for (int i = 0; i < sz; i++) {
       currSum = 0;
       for (int j = i; j < sz; j++) {
           currSum += arr[j];
           
           if (currSum > maxSum) {
               maxSum = currSum;
           }
       }
   }
   cout << maxSum << endl;


	// MAXIMUM SUBARRAY SUM BY KADANE'S ALGORITHM
	int arr[] = {1, 2, 3, 4, 5}, sz = 5;
   int maxSum = INT_MIN;
   int currSum=0;
   for(int i=0; i<sz; i++){
   	currSum+=arr[i];
   	maxSum = max(currSum, maxSum);
   	if(currSum < 0){
   		currSum=0;
		}
	}
   cout << maxSum << endl;
    
    return 0;
}
