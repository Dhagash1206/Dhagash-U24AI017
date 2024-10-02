//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT


#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;


    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }


    

