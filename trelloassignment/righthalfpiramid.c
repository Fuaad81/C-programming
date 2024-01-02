#include <stdio.h>

int main()
{
    int limit;
    printf("Enter a limit");
    scanf("%d",&limit);

    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
    return 0;
}
