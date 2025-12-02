#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(int arr[], int size) {
    for (int k = 0; k < size; k++) {
        printf("%d\n", arr[k]);
    }
}

void merge_arrays_on_new_array() {
    int A[] = {1, 4, 6};
    int n = 3;
    int B[] = {2, 3, 5};
    int m = 3;
    int total_size = n + m;

    int *C = (int *)malloc(total_size * sizeof(int));
    if (C == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {
        if (A[i] < B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j < m) {
        C[k] = B[j];
        j++;
        k++;
    }

    printf("Merged array C (O(N+M) space):\n");
    print_array(C, total_size);

    free(C);
}

void merge_arrays_in_place() {
    int A[6] = {1, 2, 3, 0, 0, 0};
    int n = 3;
    int B[] = {4, 5, 6};
    int m = 3;
    int total_size = n + m;

    int ptrA = n - 1;
    int ptrB = m - 1;
    int pWrite = total_size - 1;

    while (ptrA >= 0 && ptrB >= 0) {
        if (A[ptrA] > B[ptrB]) {
            A[pWrite] = A[ptrA];
            ptrA--;
        } else {
            A[pWrite] = B[ptrB];
            ptrB--;
        }
        pWrite--;
    }

    while (ptrB >= 0) {
        A[pWrite] = B[ptrB];
        ptrB--;
        pWrite--;
    }

    printf("Merged array A (O(1) space - In-place):\n");
    print_array(A, total_size);
}

int main() {
    merge_arrays_on_new_array();

    printf("---\n");

    merge_arrays_in_place();

    return 0;
}
