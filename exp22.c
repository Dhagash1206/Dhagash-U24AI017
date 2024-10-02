//PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include <stdio.h>

int main()
{
  long int a,b,c,n;
  long int fac = 1;


  printf("enter number to find factorial : ");
  scanf("%ld",&n);
  
  
  for (int i = 1; i < n; i++)
  {
    c = (i + 1) * fac;
    fac = c;

  }

  printf("factorial of %ld is %ld ",n,fac);



  return 0;
}