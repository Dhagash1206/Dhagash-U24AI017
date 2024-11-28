// copy string in reverse order 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev_str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *ptr = str;  // Pointer to original string
    char *rev_ptr = rev_str;  // Pointer to reversed string

    // Calculate length of original string
    int len = strlen(str);

    // Copy string in reverse order
    for (int i = len - 1; i >= 0; i--) {
        *rev_ptr = *(ptr + i);
        rev_ptr++;
    }

    // Add null terminator
    *rev_ptr = '\0';

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", rev_str);

    return 0;
}

