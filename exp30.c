// program to print reverse of a number
#include <stdio.h>

int main() {
    int num, reverse  = 0;
    int remainder;


    printf("Enter a number: ");
    scanf("%d", &num);

    while (num !=0)
    {
        remainder =  num % 10;
        reverse = reverse * 10 + remainder ;
        num /= 10;


    }

    printf("Reversed number is : %d\n", reverse);

    return 0;
}
