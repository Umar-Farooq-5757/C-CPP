#include <iostream>
#include <vector>
using namespace std;

int main(){
	// STIOCK BUY & SELL PROBLEM
	vector<int> arr={7,1,5,3,6,4};
	
	int MP=0, bestBuy = arr[0];
	
	for(int i=0; i<arr.size();i++){
		if(bestBuy < arr[i]){
			MP = max(MP, arr[i] - bestBuy);
		}
		bestBuy = min(bestBuy, arr[i]);
	}
	cout<<"Max Profit: "<<MP<<endl;
	
	
	return 0;
}
