//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.

#include <stdio.h>
int main()
{
	int i,n,a[n],max,sec_max;
	printf("enter tne no. of numbers\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("enter the number\n");
		scanf("%d",&a[i]);
	}
	max=a[1];
	sec_max=a[1];
	for(i=1;i<=n;i++)
	{
	if(a[i]>max)
	{
		sec_max=max;
		max=a[i];
	}
	else if(a[i]>sec_max)
	{
		sec_max=a[i];
	}
	}
	printf("max=%d\n",max);
	printf("sec_max=%d",sec_max);
}