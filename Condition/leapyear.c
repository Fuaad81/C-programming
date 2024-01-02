#include <stdio.h>
int main()
{
    int limit;
    printf("enter limit");
    scanf("%d",&limit);

    for (int i = 2000; i <= limit; i++)
    {
        if (i % 4 == 0 &&i % 100 != 0 || i % 400 == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}
