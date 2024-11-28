//77) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

#include <stdio.h>
int checkpalo(int num)
{
    int reverse = 0;
    int remainder;
    int x;
    int NUM = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;


    }

    if (NUM == reverse) {
        printf("entered number is palindrome");
    }

    else{
        printf("entered number is not palindrome");
    }
}

int main() {
    int num;
    int x;

    printf("enter number to check palindrome ");
    scanf("%d",&num);

    checkpalo(num);

}
