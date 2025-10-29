#include <iostream>
using namespace std;

int main(){
    int n = 12121;
    
    // 1. Store the original number for the final comparison
    int original_n = n; 
    
    // 2. CRITICAL FIX: Initialize result to 0
    int reversed_n = 0; 
    
    // We only need to reverse positive numbers; negatives are not palindromes.
    if (n < 0) {
        cout << n << " is not a palindrome (negative numbers are excluded)." << endl;
        return 0;
    }
    
    // 3. Loop to reverse the number
    while(n > 0){
        int digit = n % 10; // Get the last digit (1, then 2, then 1)
        
        // Build the reversed number: shift existing digits left (* 10) and add the new digit
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
