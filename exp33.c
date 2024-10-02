//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include <stdio.h>
int main ()
{
    int n,max,min,i;

    printf("Enter the number of elements to calculate :");
    scanf("%d", &n);

    min = +999;
    max = -999;

    for (i = 1; i <= n; i++) {
        int num;
        printf("enter number : ");
        scanf("%d", &num);

        if (num > max) 
        
        {
            max = num;
        } 
        if (num < min) 
        {
            min = num;
        }
    }

    printf("Maximum number is : %d", max);
    printf("\nMinimum number is : %d", min);

    return 0;
}
