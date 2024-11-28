// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY
//X AND Y

#include <stdio.h>
#include <string.h>
int main()
{
    int g, flag = 0;
    char array1[30];
    printf("enter the number of strings : ");
    scanf("%d", &g);
    char array[g][200];
    for (int i = 0; i < g; i++)
    {
        scanf("%s", array[i]);
    }
    for (int i = 0; i < g; i++)
    {
        int len = strlen(array[i]);

        for (int j = 0; j < len - 1; j++)
        {
            if (array[i][j] < array[i][j + 1])
            {

                char temp = array[i][j];
                array[i][j] = array[i][j + 1];
                array[i][j + 1] = temp;

                    flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%s\n", array[i]);
        }
    }
}