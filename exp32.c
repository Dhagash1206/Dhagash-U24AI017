// PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS

#include <stdio.h>

int main ()
{

    int sec_max,max,num,n;
    max,sec_max = 0;

    printf("enter total numbers : ");
    scanf("%d",&n);


    for (int i = 1; i<= n ; i++ )
    {
        printf("enter number : ");
        scanf("%d",&num);
        if (num > max){
            sec_max = max;
            max = num;


        }

    }
    printf("max number is : %d",max);
    printf("second max number is : %d",sec_max);
}

