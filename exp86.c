//WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.

#include <stdio.h>
void checkVowel(char ch) ;

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);  

    checkVowel(ch);

    return 0;
}

void checkVowel(char ch) 
{
    
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }
}