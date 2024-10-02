//program to swap two variables using third variable 

#include <stdio.h>

int main()
{
  int a, b, c;

  printf("Enter first digit :  ");
  scanf("%d" ,&a );

  printf("Enter second digit :  ");
  scanf("%d" ,&b );

  //logic
  
  c = a;

  a = b;

  b = c;

  printf("a is now %d and b is now %d as they are swaped ", a, b);

  return 0;
}
