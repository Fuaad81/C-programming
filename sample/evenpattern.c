#include <stdio.h>
    
int main()
{
    int limit,i,j;
    printf("Enter pattern limit");
    scanf("%d",&limit);
    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",j*2);
        }
        printf("\n");
    }
    
    return 0;
}