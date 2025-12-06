#include <iostream>
#include <vector>
using namespace std;

int main(){
	// STIOCK BUY & SELL PROBLEM
	vector<int> arr;
	arr.push_back(7);
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(3);
	arr.push_back(6);
	arr.push_back(4);
	
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
