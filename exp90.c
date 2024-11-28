//

#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    gets(str);
    ptr = str;

    int with_space = 0, no_space = 0;


    while (*ptr != '\0')
    {
        with_space++;
        ptr++;
    }
    with_space--;


    ptr = str;
    while (*ptr != '\0')
    {
            if (*ptr != ' ' && *ptr != '\n')
        {
            no_space++;
        }
        ptr++;
    }

    printf("Length of string including spaces: %d\n", with_space);
    printf("Length of string excluding spaces: %d\n", no_space);

    return 0;
}
