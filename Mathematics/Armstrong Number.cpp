#include <iostream>
#include <vector>
using namespace std;

bool isArmstrong(int n){
	int copyN = n;
	int sum=0;
	while(copyN>0){
		int digit = copyN%10;
		sum += (digit*digit*digit);
		copyN /= 10;
	}
	return sum == n;
}

int main(){
	int n = 153;
	cout<<isArmstrong(n)<<endl;
	cout<<isArmstrong(111);
    return 0;
}
