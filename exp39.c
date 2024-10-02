//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,.........N.

#include <stdio.h>

int main() {
    int N, i, factorial;
    float sum ;

    printf("Enter the last digit of series ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) 
    {
        factorial = 1;
        for (int j = 1; j <= i; j++) 
        {
            factorial *= j;
        }
        sum +=  (float)i / factorial;
    }

    printf("The sum of the series is: %.3f\n", sum);

    return 0;
}