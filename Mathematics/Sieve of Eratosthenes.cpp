#include <iostream>
#include <vector>
using namespace std;

int main(){
	// Count of prime numbers from 1 to n;
	int n = 50;
	vector<bool> count(n+1 , true);
	int ans = 0;
	for(int i=2; i<n; i++){
		if(count[i] == true){
			ans++;
			for(int j=i*2; j<n; j=j+i){
				count[j] = false;
			}
		}
	}
  cout<<ans;
    return 0;
}
