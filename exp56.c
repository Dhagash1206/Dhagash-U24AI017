//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,
//NEGATIVE, AND ZERO ELEMENTS.



#include <stdio.h>
void main()
{
	int a[10],i,count=0;
    int positivecount = 0;
    int negativecount = 0;
    int zerocount = 0;

	for(i=0;i<10;i++)
	{
		printf("enter the value : ");
		scanf("%d",&a[i]);
		if(a[i] > 0)
		{
            positivecount = positivecount + 1;
			
		}
        else if(a[i] < 0)
		{
            negativecount = negativecount + 1;
			
		}

        else if(a[i] == 0)
		{
            zerocount = zerocount + 1;
			
		}
	}
    printf("total number of positive elements are : %d",positivecount);
        printf("\ntotal number of negative elements are : %d",negativecount);
        printf("\ntotal number of zero elements are : %d",zerocount);
}