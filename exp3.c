// program to calculate gross salary 

#include <stdio.h>
int main() 
{
  int GC, BC , rents , Other_benefits;

// GC is gross salary and BC is Basic salary

  printf("\nEnter Basic Salary : ");
  scanf("%d", &BC);

  printf("\nEnter all rents allowances : ");
  scanf("%d", &rents);

  printf("\nEnter other benefits please : ");
  scanf("%d", &Other_benefits);

// formula 
  GC = rents + BC + Other_benefits;

  printf("\nYour gross salary is %d", GC);
  return 0;
}