//PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.

#include <stdio.h>

int main()
{

  int a;

  printf("Enter the number to check whether the number is even or odd : ");
  scanf("%d", &a);

  if (a % 2 == 0)
  {
    printf("The number you entered: %d, is even", a);
  }
  else
  {
    printf("The number you entered: %d, is odd", a);
  }

  return 0;
}
