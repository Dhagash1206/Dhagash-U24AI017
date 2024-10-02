// area of triangle

#include <stdio.h>

int main()
{

  int a,b, c;

  printf("Enter height of triangle :  ");
  scanf("%d" ,&a );

  printf("Enter base of the triangle : ");
  scanf("%d" ,&b );

  //formula
  
  c = (a * b) / 2;

  printf("\nArea of the triangle is %d", c);

  return 0;
}
