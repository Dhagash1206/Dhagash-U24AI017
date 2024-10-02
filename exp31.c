//program to print sum of individual digits of N digit no.
#include<stdio.h>
int main()
{ int num,sum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&num);
   while(num>0)
   {
     remainder=num%10;
     sum=sum+remainder;
     num=num/10;
     
    }
    printf("%d is sum of all digits",sum);

}