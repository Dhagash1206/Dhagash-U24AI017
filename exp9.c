// Hours, min, sec into total seconds

#include <stdio.h>

int main()
{

  int hour, min, sec, total;

  printf("enter your time in hours : ");
  scanf("%d",&hour);

  printf("enter your time in minutes : ");
  scanf("%d",&min);

  printf("enter your time in seconds : ");
  scanf("%d",&sec);

// formula 
  total = (hour * 3600) + (min * 60) + sec;

  printf("\ntotal seconds: %d", total);
  
  return 0;

}

