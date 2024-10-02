// program to read a character wheater it is small case letter or not, using conditional operator...


#include<stdio.h>


int main(){
  char character;
  int asciiValue;
 


  printf("Enter your character here : ");
  scanf("%c", &character);


  asciiValue = character;


  (asciiValue >= 97 && asciiValue <= 122 ) ? printf("It's small case") : printf("It's Not small case");
}
