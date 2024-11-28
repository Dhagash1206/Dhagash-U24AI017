//WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
//ZERO OTHERWISE.


#include<stdio.h>
int checkprime(int num)

{
    int yes,i;
    
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
        return 0;
    }

    else 
    {
        return 1 ;
    }

}

int main()
{
    int num;
    printf("Enter a positive number : ");
    scanf("%d",&num);

    int x = checkprime(num);

    printf("%d",x);
}