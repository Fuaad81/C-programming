#include <stdio.h>
    
int main()
{
    int n,i,j;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
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
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }
        for(j = 1; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    
    return 0;
}