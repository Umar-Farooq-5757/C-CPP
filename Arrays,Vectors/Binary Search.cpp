#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1,2,3,3,6,23,6,32,5,7,89};
    
    int sz = arr.size();
    int target = 28;
    int start = 0;
    int end = sz - 1;
    int index_found = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (target == arr[mid]) {
            index_found = mid;
            break;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    if (index_found != -1) {
        cout << "Target " << target << " is at index: " << index_found << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
