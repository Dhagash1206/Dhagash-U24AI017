/*(A GUESSING GAME): With this program the user has to guess a number that
the program has picked as the lucky number. It uses one for loop and plenty of if
statements. I’ve also thrown in a conditional operator, just to make sure you
haven’t forgotten how to use it!*/


#include<stdio.h>
int main(){
    int a,num;
    a=6;
    for(int i=0;i<15;i++)
    {
       printf("Enter your guessed number:");
       scanf("%d",&num);
       if(a==num)
       {
        printf("CONGRATULATIONS!!You guessed right number");
        break;
       }
       else 
       printf("try again\n");
    }
}