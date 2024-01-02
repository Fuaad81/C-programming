#include <stdio.h>

int main()
{
    int i,j,limit;
    printf("Enter limit");
    scanf("%d",&limit);

    for (i = 1; i <= limit; i++)
    {
        for(j = 1; j <= limit; j++)
        {
            if (i+j<=limit)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}