//PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN
//THIRD MATRIX.


#include <stdio.h> 
int main() {
	int m1[3][3], m2[3][3], sum[3][3];
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
            printf("Enter the matrix A elements: ");
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\n\n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
            printf("Enter the matrix B elements: ");
			scanf("%d", &m2[i][j]);
		}
	}
	
	printf("\n\nSum matrix: \n");
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			sum[i][j] = 0;
			sum[i][j] = m1[i][j] + m2[i][j];
			printf("%d \t", sum[i][j]);
		}
		printf("\n");
	}
}