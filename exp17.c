// read three no. and print max using (&&) operator

#include <stdio.h>

int main()
{

  int a, b, c, max;

  printf("Enter first number : ");
  scanf("%d",&a);
  
  printf("Enter second number : ");
  scanf("%d",&b);

  printf("Enter third number : ");
  scanf("%d",&c);

  if (a > b && a > c )
  {
    printf("%d in the largest number ",a);
  }

  if (b > a && b > c )
  {
    printf("%d in the largest number ",b);
  }

  if (c > b && c > a )
  {
    printf("%d in the largest number ",c);
  }
}