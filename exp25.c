/* to print table of any number
*/


#include<stdio.h>
void main()
{
    int a,table,i;
    printf("Enter the Number to print Table : ");
    scanf("%d",&a);

    for(int i=1;i<=10;i++)
    {
      table = a * i;
      printf("%d multiplied by %d is %d\n",a,i,table);
    }
}