//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
//LIST OF NUMBERS READ.

#include <stdio.h>

int main(){
    int num,num1,i;
    int sum = 0;
    num1=num;
    
    for(i=1;;i++)
    {
        if(num>0)
        {
            printf("Enter the number : ");
            scanf("%d",&num);
            if(num>=0)
            {
                sum=sum+num;
                }
        }

        else
        {
            break;
        }
    }
    printf("%d is the sum",sum);
    return 0;

}