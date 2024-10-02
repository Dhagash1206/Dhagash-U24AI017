//print pattern

#include<stdio.h>
int main(){
    int rows,i,j;
    char character;
    printf("Enter character you want to start with : ");
    scanf("%c",&character);

    for(i=1;i<=5;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("%c",character+j);
            }
            
            printf("\n"); 
        }
      
return 0;
}