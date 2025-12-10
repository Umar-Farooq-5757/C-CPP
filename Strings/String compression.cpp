#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	char arr[] = {'a','a','b','b','a','c','c'}, sz=7;
	vector<char> ans;
	
	for(int i=0; i<sz; i++){
		int count = 1;
		char ch = arr[i];
		while(i+1<sz && arr[i+1]==ch){
			count++;
			i++;
		}
		ans.push_back(ch);
		string countStr = to_string(count);
		for(int z=0; z<countStr.length();z++){
			ans.push_back(countStr[z]);
		}
	}
	
	for(int i=0; i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	
	return 0;
}
