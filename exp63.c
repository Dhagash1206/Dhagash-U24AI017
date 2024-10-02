//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

#include <stdio.h>
int main() 
{
	int arr[3][3];
	printf("Enter the elements of matrix :: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	int min = arr[0][0];
	int max = arr[0][0];
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] > max) 
			{
				max = arr[i][j];
			}
			else if (arr[i][j] < min) 
			{
				min = arr[i][j];
			}
		}
	}
	printf("Min = %d \n", min);
	printf("Max = %d \n", max);
return 0;
}