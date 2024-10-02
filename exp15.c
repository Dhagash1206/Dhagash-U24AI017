// program to read marks of five subjects and print result.

#include <stdio.h>

int main()
{

  float total, Math, Physics, Chemistry, English, Computer, grade;

  printf("Enter your Math marks : ");
  scanf("%f", &Math);

  printf("\nEnter your Computer marks : ");
  scanf("%f", &Computer);

  printf("\nEnter your Physics marks : ");
  scanf("%f", &Physics);

  printf("\nEnter your Chemistry marks : ");
  scanf("%f", &Chemistry);

  printf("\nEnter your English marks : ");
  scanf("%f", &English);

  total = Math + Physics + Chemistry + English + Computer;

  grade = total / 5;

  if (grade >= 80 && grade <= 100)
  {

    printf("Your Grade is A");
  }
  else if (grade >= 60 && grade <= 79)
  {

    printf("Your Grade is B");
  }
  else if (grade >= 40 && grade <= 59)
  {

    printf("Your Grade is C");
  }
  else
  {

    printf("Your grade is D");
  }

  return 0;
}
