//program for electricity distribution company for domestic customers
#include<stdio.h>
int main()
{
    int unit,total;
    printf("Enter units consumed by the customer : ");
    scanf("%d",&unit);
    if(unit>0&&unit<=200)
        {
            total=unit*0.50;
            printf("Amount to be paid by customer is RS.%d",total);
        }
    else if(unit>201&&unit<=400) 
        {
            total=100+(unit*0.65);
           printf("Amount to be paid by customer is RS.%d",total);
        }
    else if(unit>401&&unit<=600)
        {
            total=230+(unit*0.80);
            printf("Amount to be paid by customer is RS.%d",total);
        } 
    else if (unit>600)
        {
            total=425+(unit*1.25);
           printf("Amount to be paid by customer is RS.%d",total);
        } 
    else 
    {
        printf("wrong input");
    }    

}