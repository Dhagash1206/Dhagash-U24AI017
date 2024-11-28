#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        printf("enter %d number : ", i + 1);
        scanf("%d", arr + i );
    }

    int *max_ptr = arr;

    // Find the biggest integer
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *max_ptr) {
            max_ptr = arr + i;
        }
    }

    printf("Biggest integer: %d\n", *max_ptr);

    return 0;
}
