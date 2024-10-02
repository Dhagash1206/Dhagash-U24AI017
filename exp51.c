//print pattern

#include<stdio.h>
int main(){
    int rows,i,j,k;

    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i==j)
                {
                    printf("1");
                }
                else 
                printf("0");
            }

            for(k=rows;k>i;k--)
            {
                printf("0");
            }
            
            printf("\n");
        }
      
return 0;
}