#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	// reverse words in a string
	string str = "Farooq Umar is name My";
	string ans = "";
	reverse(str.begin(),str.end());
	
	for(int i=0; i<str.length(); i++){
		string word="";
		while((i<str.length()) && (str[i] != ' ')){
			word += str[i];
			i++;
		}
		reverse(word.begin(),word.end());
		if(word.length()>0){
			ans+= ' '+word;
		}
		
	}
	
	cout<<ans.substr(1);
	
	return 0;
}
