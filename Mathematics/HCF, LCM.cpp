#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b){
	// EUCLID'S ALGORITHM
	while(a>0 && (b>0)){
		if(a>b){
			a = a%b;
		}else{
			b=b%a;
		}
	}
	if(a == 0){
		return b;
	}
	else{
		return a;
	}
}

int main(){
	int a=18;
	int b=24;
	
//	int gcd = 1;
//	for(int i=2; i<min(a,b); i++){
//		if((a%i==0) && (b%i==0)){
//			gcd = i;
//		}
//	}
//	cout<<"GCD / HCF :::: "<<gcd<<endl;
	
	
	
	
	// LCM = a*b / gcd(a,b)
	int lcm = (a*b)/GCD(a,b);
	cout<<"LCM :::: "<<lcm<<endl;
	
	
    return 0;
}
