// Calculate Student cutoff marks 

#include <stdio.h>

int main()
{

  float CM, Math, Physics, Chemistry, english;

  printf("Enter your Math marks (out of 200) : ");
  scanf("%f", &Math);

  printf("Enter your Physics marks (out of 200) : ");
  scanf("%f", &Physics);

  printf("Enter your Chemistry marks (out of 200) : ");
  scanf("%f", &Chemistry);

  printf("Enter your english marks (out of 100) : ");
  scanf("%f", &english);

  //formula 

  CM = (Math / 2) + (Physics / 2) + (Chemistry / 2) + english;

  printf("Your cutoff marks is: %.2f ", CM);

  return 0;
}
