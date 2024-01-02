#include <stdio.h>

int main()
{
    int j, i, s, n = 8;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if ((i + j) <= n)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    for (i = n; i >= 1; i--)
    {

        for (s = i; s < n; s++)
            printf(" ");

        for (j = 1; j < i; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}