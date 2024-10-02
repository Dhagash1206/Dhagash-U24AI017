// program to calculate simple interest 

#include <stdio.h>

int main()
{
  int principal,rate, time, simple_interest;

  printf("Enter the principal amount: ");
  scanf("%d", &principal);

  printf("\nEnter the annual interest rate (in percentage): ");
  scanf("%d", &rate);

  printf("\nnter the time period (in years): ");
  scanf("%d", &time);


// formula 
  simple_interest = (principal * rate * time) / 100;

  printf("\nSimple Interest = %d", simple_interest);

  return 0;
}