#include <stdio.h>

int main() {
    int matrix[5][5] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 12, 14, 17, 24},
        {18, 21, 23, 26, 30},
    };
    int m = 5;    
    int n = 5;      
    int target = 6; 
    
   
    int r = 0;     
    int c = n - 1;  
    
  
    int found = 0; 
    
 
    while (r < m && c >= 0) {
        int currValue = matrix[r][c];
        
        if (currValue == target) {
            /
            printf("Target is found %d at point %d, %d\n", currValue, r, c);
            found = 1; 
            break;
        } else if (target > currValue) {
            r++;
        } else {
            c--;
        }
    }
    
    
    if (found == 0) {
        printf("Target %d not found in the matrix.\n", target);
    }
    
    return 0; 
}
