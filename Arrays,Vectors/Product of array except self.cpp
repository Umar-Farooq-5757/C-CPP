#include <iostream>
#include <vector>
using namespace std;

int main() {
	// BRUTE FORCE APPROACH
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(7);
	arr.push_back(2); // [1, 3, 7, 2]
	
	vector<int> resultArr;
	for(int i=0; i<arr.size(); i++){
		int prod = 1;
		for(int j=0; j<arr.size(); j++){
			if(j == i){
				continue;
			}
			prod *= arr[j];
		}
		resultArr.push_back(prod);
	}
	
	for(int i=0; i<resultArr.size(); i++){
		cout<<resultArr[i]<<endl;
	}

	// PREFIX/SUFFIX APPROACH
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(7);
	arr.push_back(2); // [1, 3, 7, 2]
	int sz = arr.size();
	vector<int> resultArr(sz);
	vector<int> prefix(sz);
	vector<int> suffix(sz);

	prefix[0] = 1;
	suffix[sz-1] = 1;
	for(int i=1; i<sz; i++){
		prefix[i] = prefix[i-1] * arr[i-1];
	}
	
	for(int i=sz-2; i>=0; i--){
		suffix[i] = suffix[i+1] * arr[i+1];
	}
	for(int i=0; i<sz; i++){
		resultArr[i] = prefix[i] * suffix[i];
	}
    
    return 0;
}
