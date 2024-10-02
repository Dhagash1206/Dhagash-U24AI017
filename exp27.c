//program to check whether a number is prime or not
#include<stdio.h>
int main()

{
    int yes,i,num;
    printf("Enter a positive number : ");
    scanf("%d",&num);

    if (num > 1)
    {
        for(i = 2;i<num/2; i++)
        {
            if (num%i == 0)
            {
                yes = 0;

            }
        }
    }

    if (yes == 0)
    {
        printf("number entered is composite number");
    }

    else 
    {
        printf("number entered is prime number ");
    }

}