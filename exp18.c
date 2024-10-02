// read three no. and print max using ( ? : ) operator

#include <stdio.h>

int main()
{

  int a, b, c, max;

  printf("Enter first number : ");
  scanf("%d",&a);
  
  printf("Enter secon number : ");
  scanf("%d",&b);

  printf("Enter first number : ");
  scanf("%d",&c);

  max = a > b && a > c ? a : b > a && b > c ? b : c;

  printf("%d is the maximum number", max);
}