#include <iostream>
#include <vector>
using namespace std;

int main(){
		// POW(X,N)
	int exponent = 5;
	int x = 3;
	double ans=1;
	
	while(exponent > 0){
		if(exponent%2 == 1){
			ans = ans*x;
		}
		
		x = x*x;
		exponent /= 2;
	}
	
	cout<<"Answer: "<<ans<<endl;

	
	return 0;
}
