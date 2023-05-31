#include <stdio.h>
#include <string.h>

int main()
{
    char str[50], dir[2];
    scanf("%s %s", str, dir);

    if (strcmp(dir, "L") == 0)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            for (int j = i+1; j < i+1 + strlen(str); j++)
            {
                if (j < strlen(str))
                    printf("%c", str[j]);
                else
                {
                    int temp = j - strlen(str);
                    printf("%c", str[temp]);
                }
            }
            printf("\n");
        }
    }
    else if (strcmp(dir, "R") == 0)
    {
        for (int i = 0 ; i <= strlen(str); i++)
        {
            for (int j = strlen(str) - i - 1 ; j < strlen(str) - i - 1 + strlen(str) ; j++)
            {
                // printf("%d ", j);
                if (j < strlen(str))
                    printf("%c", str[j]);
                else{
                    int temp = j - strlen(str);
                    printf("%c", str[temp]);
                }
            }
            printf("\n");
        }


    }
}