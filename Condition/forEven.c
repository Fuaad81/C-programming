#include <stdio.h>

int main()
{
    int limit;

    printf("Enter a number");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\t",i);
        }
        
    }

    return 0;
}
