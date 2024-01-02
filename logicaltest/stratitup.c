#include <stdio.h>


int main()
{
    char str[10];
    int size, i;
    printf("enter size : ");
    scanf("%d", &size);
    printf("Enter a name : ");
    for (i = 0; i <= size; i++)
    {
        scanf("%c", &str[i]);
    }
    for (i= 1; i < str[i]; i++)
    {
        printf("%c", str[i]);
        if(i<size)
        {
            printf("*");
        }
        
    }

    return 0;
}