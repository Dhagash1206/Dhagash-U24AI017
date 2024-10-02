//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME. 

#include <stdio.h>

int main()
{

  int hour, min, sec, ts;

  // ts is totalseconds


  printf("enter your total seconds to convert it into hours, minutes and seconds respectivily : ");
  scanf("%d", &ts);

  //formula
  hour = ts / 3600;
  ts = ts % 3600;
  min = ts / 60;
  ts = ts % 60;
  sec = ts;

  printf("%d Hour %d Minutes %d Seconds", hour, min, sec);

  return 0;
}
