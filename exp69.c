//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n, i, present = 0;

    printf("Enter the element to search: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (arr[i] == n) {
            present = 1;
            break;
        }
    }

    if (present) {
        printf("Element present at index %d\n", i);
    } else {
        printf("Element not present\n");
    }

    return 0;
}
