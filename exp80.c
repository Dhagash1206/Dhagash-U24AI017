//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
// NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15.

#include <stdio.h>

int fibo(int n)
{

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < n ; i ++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];

    }
    printf("fibonacci series : ");
    for(int i = 0; i < n ; i ++)
    {
        printf("%d ",fib[i]);
        
    }

}


int main(){
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibo(n);
}