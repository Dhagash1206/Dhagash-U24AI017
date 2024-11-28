// WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
// POINTERS.

#include<stdio.h>
#include<string.h>

int main()
{   int N =5;
    char strings[5][100];
    strcpy(strings[0],"rohit");
    strcpy(strings[1],"mohit");
    strcpy(strings[2],"raj");
    strcpy(strings[3],"prakash");
    strcpy(strings[4],"pradeep");





    char *ptr[5];
    char *temp;

    for(int i =0; i <N; i++)
    {
        ptr[i] = strings[i];
    }

    
    for(int i =0; i < N; i++)
    {
        for(int j =i+1; j <N; j++)
        {
            if(strcmp(ptr[i],ptr[j])>0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }




    for(int i =0; i <N; i++)
    {
        puts(ptr[i]);
    }
return 0;
}