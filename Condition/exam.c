#include <stdio.h>


int main()
{
    int arr[10], value = 0, size, i, new;
    printf("enter size : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        value = value + arr[i];
    }
    
    printf("%d ", value);

    printf("\n");

    for (i = 0; i < size; i++)
    {
        new = value - arr[i];
        printf("%d ", new);
    }

    

    return 0;
}