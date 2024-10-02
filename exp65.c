//PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.

#include <stdio.h>

int main(){
    int a[3],b[3],c[3];
   
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                 printf("Enter the matrix : ");
                scanf("%d",&a[j]);
            }
            else if(i==1)
            {
                 printf("Enter the matrix : ");
                scanf("%d",&b[j]);
            }
            else
            {
                 printf("Enter the matrix : ");
                scanf("%d",&c[j]);
            }
        }
    }
    printf("\nMATRIX\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
            {
                printf("%d\t",a[j]);
            }
            else if(i==1)
            {
                printf("%d\t",b[j]);
            }
            else
            {
                printf("%d\t",c[j]);
            }
        }
        printf("\n");
    }
    printf("\nTRANPOSE MATRIX\n");
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            if(i==0)
            {
                printf("%d\t",a[j]);
            }
            else if(i==1)
            {
                printf("%d\t",b[j]);
            }
            else
            {
                printf("%d\t",c[j]);
            }
        }
        printf("\n");
    }
    return 0;
}