// program to read an array of 10 intergers and count total number of odd and total number of every element 


#include <stdio.h>
int main()
{
	int a[10],i,oddcount =0,count=0;
	for(i=0;i<10;i++)
	{
		printf("enter the value : ");
		scanf("%d",&a[i]);
		count=count+1;
		if(a[i]%2==1)
		{
			oddcount =oddcount +1;
		}
	}
	printf("no. of odd elements are : %d ",oddcount );
	printf("total no. of elements are : %d",count);
}