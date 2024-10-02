// program to convert fahrenheit to centigrade


#include <stdio.h>

int main() 
{
    float fahrenheit, centigrade;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) * 5.0/9.0;

    printf("conversion of fahrenheit to centigrade is : %.3f to %.3f ", fahrenheit, centigrade);

    return 0;
}

