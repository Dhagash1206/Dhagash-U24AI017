//read two numbers and perform specific task using switch case
#include<stdio.h>
int main(){
    char operator;
    float a,b,c;
    
    printf("enter operation to be performed");
 scanf("%c",&operator);
   
    printf ("Enter value of operand 1 :");
    scanf("%f",&a);
    printf("Enter value of operand 2 :");
    scanf("%f",&b);
    
    
    switch (operator) {
    case '+': c=a+b;
              printf("%.3f is the sum",c);
    break;
    case '-': c=a-b;
              printf("%.3f is the difference",c);
    break;
    case '*': c=a*b;
          printf("%.3f is the product",c);
    break;
    case '/': c=a/b;
          printf("%.3f is the quotient",c);
    break;
    default : printf("Invalid operation");
    }
    return 0;

}