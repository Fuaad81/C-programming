#include <stdio.h>

int main()
{
    int n[10], number, i, check,flag;
    printf("Enter number : ");
    scanf("%d", &number);
    printf("Enter array values : ");
    for (i = 1; i <= number; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("enter check number : ");
    scanf("%d", &check);
    for (i = 0; i <= number; i++)
    {
        if (n[i] == check)
        {
            printf("%d occur in %d times",check,n[i]);
        }
    }
    


    return 0;
}