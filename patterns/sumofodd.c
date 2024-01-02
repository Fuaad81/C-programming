#include <stdio.h>

int main()
{
    int size, arr[10], i, sum=0;
    printf("Enter array size : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum = sum + arr[i];
        }
    }

    printf("sum of odd elements is : %d", sum);

    return 0;
}