#include <iostream>
#include <vector>
using namespace std;

int main(){
	// USING VECTOR
	vector<int> myVec;
	myVec.push_back(1);
	myVec.push_back(347);
	myVec.push_back(2);
	myVec.push_back(1);
	myVec.push_back(2);
	int vecResult=0;
	for(int i=0; i<myVec.size(); i++){
		vecResult = vecResult^myVec[i];
	}
	
	cout<<"Unique element: "<<vecResult<<endl;
	
	
	// USING ARRAY
	int arr[] = {4,1,2,2,1,4,6}, sz=7;
	int arrResult=0;
	for(int i=0; i<sz; i++){
		arrResult = arrResult^arr[i];
	}
	
	cout<<"Unique element: "<<arrResult<<endl;
	
	return 0;
}
