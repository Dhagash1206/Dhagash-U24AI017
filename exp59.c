//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE
//ARRAYS.


#include <stdio.h>

int main(){
    int a[10],b[10],c[10],temp,temp2;
    for(int i=1;i<10;i++)
    {
        printf("Enter the element of first array : ");
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    for(int j=1;j<10;j++)
    {
        printf("Enter the element of second array : ");
        scanf("%d",&b[j]);
    }
    printf("\n\n");
    for(int j=1;j<10;j++)
    {
        temp=a[j];
        a[j]=b[j];
        b[j]=temp;
        printf("After swapping array one elements are %d\n",a[j]);
    }

    printf("\n\n");
    for(int i=1;i<10;i++){

        printf("After swapping array two elements are %d\n",b[i]);
    }
    return 0;
}