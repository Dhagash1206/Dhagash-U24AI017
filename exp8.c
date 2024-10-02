// Earth takes 31558150 seconds convert it to days,hours and minutes

#include <stdio.h>

int main()
{

  int secs, days, hours, minutes;

  secs = 31558150;

  days = secs / (24 * 3600);

  hours = secs / 3600;

  minutes = secs / 60;

  printf("\n\nEarth takes 31558150 seconds which means it take %d days , %d hours , %d minutes",days, hours, minutes);

  return 0;
}
