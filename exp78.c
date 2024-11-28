//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.


#include <stdio.h>

int ams(int number) 
{
    int cube_sum = 0, q;
    int temp = number; 

    while (temp != 0)
    {
        q = temp % 10;
        cube_sum += q * q * q;
        temp /= 10;
    }
    return cube_sum; 
}

int main() 
{
    int number, cube_sum;

    printf("Enter a number to check : ");
    scanf("%d", &number);
    
    cube_sum = ams(number);  

    if (cube_sum == number)
    {
        printf(" Armstrong number\n");
    }
    else
    {
        printf(" not an Armstrong number\n");
    }

}