//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.

#include <stdio.h>
int check(int a)
{
    return a % 2;
}


int main()
{
    int a;

    printf("enter the number : ");
    scanf("%d",&a);

    int c = check(a);

    if (c == 0)
    {
        printf("entered number is even ");
    }

    else if (c == 1)
    {
       printf("entered number is odd ");
    }


    return 0;



}