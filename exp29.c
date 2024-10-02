//check whether number is palindrome or not 

#include <stdio.h>
int main() {
    int num, reverse = 0;
    int remainder;


    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    int originalNum = num;

    // Reverse number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;


    }

    // Check if palindrome
    if (originalNum == reverse) {
        printf("the number is a palindrome number.\n");
    } 
    
    else {
        printf("the number is not a palindrome number.\n");
    }

    return 0;
}
