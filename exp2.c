//program to read marks of five subjecgts of a student
//calculate total and percentage 


#include <stdio.h>

int main() {
  int math, physics , chemistry , cs, PE , total;
  float percentage;

  printf("Please enter your maths marks (out of 100) : ");
  scanf("%d", &math);

  printf("\nPlease enter your physics marks (out of 100) : ");
  scanf("%d", &physics);

  printf("\nPlease enter your Chemistry marks (out of 100) : ");
  scanf("%d", &chemistry);

  printf("\nPlease enter your computer science marks here (out of 100) : ");
  scanf("%d", &cs);

  printf("\nPlease enter your physical education marks (out of 100) : ");
  scanf("%d", &PE);

// formula 
  total = math + physics + chemistry + cs + PE;

// formula 
  percentage = total * 100.0 / 500.0;


  printf("So your total marks is %d (out of 500) and your percentage is %.3f", total, percentage);



  return 0;
}