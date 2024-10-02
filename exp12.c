// PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER 

#include <stdio.h>

int main()
{

  char ch;

  printf("Enter any character to convert it into ACSII code :  ");
  scanf("%c", &ch);
  
  printf("%c ACSII Code is: %d", ch, ch);

  return 0;
}
