#include <iostream>
using namespace std;

int main(){
    int n = 12121;
    
    int original_n = n; 
    int reversed_n = 0; 
    
    if (n < 0) {
        cout << n << " is not a palindrome (negative numbers are excluded)." << endl;
        return 0;
    }
    
    while(n > 0){
        int digit = n % 10;
        
        reversed_n = reversed_n * 10 + digit;
        
        n = n / 10;
    }
    
    cout << "Reversed number: " << reversed_n << endl; 

    if(original_n == reversed_n){
        cout << original_n << " is a palindrome! " << endl;
    } else {
        cout << original_n << " is not a palindrome. " << endl;
    }
    
    return 0;
}
