//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE
//ARRAYS INTO THIRD.


#include <stdio.h>
int main()
{
	int a[10],b[10],c[10];
    int i;
	for(i=0;i<10;i++)
	{
		printf("enter the value : ");
		scanf("%d",&a[i]);
        printf("enter the value : ");
		scanf("%d",&b[i]);

        c[i] = a[i] + b[i];

        printf("sum value %d \n",c[i]);

    }
}