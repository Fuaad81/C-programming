#include <stdio.h>
    
int main()
{
    int i,j,limit;
    printf("Enter limit : ");
    scanf("%d",&limit);

    for (i = 0; i <= limit; i++)
    {
        for (j = limit; j >= 1; j--)
        {
            if (i >= j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }

    for (i = 0; i < limit-2; i++)
    {
        for (j = 0; j < limit-1; j++)
        {
            if (j == 0)
            {
                printf(" ");
            }
            else{
                printf(" *");
            }
            
        }
        printf("\n");
        
    }
    
    
    return 0;
}