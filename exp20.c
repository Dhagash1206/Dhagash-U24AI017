// Simple Calculator using switch statements

#include <stdio.h>

int main()
{

  char operator;
  float num1, num2, answer;

  printf("Enter the operator you want to use: (+, -, *, /) :  ");
  scanf("%c", &operator);

  printf("enter first number : ");
  scanf("%f",&num1);

  printf("enter second number : ");
  scanf("%f",&num2);

  switch (operator)
  {
  case '+':
    answer = num1 + num2;
    printf("Your answer of %.2f + %.2f = %.2f", num1, num2, answer);
    break;

  case '-':
    answer = num1 - num2;
    printf("Your answer of %.2f - %.2f = %.2f", num1, num2, answer);
    break;

  case '/':
    answer = num1 / num2;
    printf("Your answer of %.2f / %.2f = %.2f", num1, num2, answer);
    break;

  case '*':
    answer = num1 * num2;
    printf("Your answer of %.2f X %.2f = %.2f", num1, num2, answer);
    break;

  default:
    printf("Invalid Operator, Please Try again");
    break;
  }

  return 0;
}
