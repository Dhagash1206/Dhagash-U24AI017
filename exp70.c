//PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR
//ELEMENT IN THE ARRAY.

#include <stdio.h>
int main()
{
 int a[100],n,i,s,count=0;
 printf("Enter number of elements in array - ");
 scanf("%d",&n);


 for(i=0;i<n;i++)
 {
    printf("Enter %d integers \n",i);
    scanf("%d",&a[i]);
    }
    printf("enter number to find : ");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if(s == a[i])
        {
        count = count + 1;
        }
  
}

printf("the occurrence of %d is %d",s,count);
}