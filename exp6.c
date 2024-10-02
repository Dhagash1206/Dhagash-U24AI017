// program to swap two variable without using a third variable

#include <stdio.h>

int main()
{
  int a, b;
  
  printf("Enter first digit :  ");
  scanf("%d" ,&a );

  printf("\nEnter second digit :  ");
  scanf("%d" ,&b );

  a = a+b;

  b = a-b;

  a = a-b;
  
  printf("\n\na is now %d and b is now %d as they are swaped ", a, b);

  return 0;

}
