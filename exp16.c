// find max of 3 numbers 

#include <stdio.h>

int main()
{

  float a, b, c;

  printf("Enter first number to find the maximum number : ");
  scanf("%f",&a);
  
  printf("Enter first number to find the maximum number : ");
  scanf("%f",&b);

  printf("Enter first number to find the maximum number : ");
  scanf("%f",&c);

  if (a > b)
  {

    if (a > c)
    {

      printf("Number %.2f is the biggest from all three", a);
    }
    else
    {

      printf("Number %.2f is the biggest from all three", c);
    }
  }
  else
  {

    if (b > c)
    {

      printf("Number %.2f is the biggest from all three", b);
    }
    else
    {

      printf("Number %.2f is the biggest from all three", c);
    }
  }

  return 0;
}
