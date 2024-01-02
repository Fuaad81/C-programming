#include <stdio.h>
int main()
{
    int a[100], size, i, max, min;
    printf("Enter array size : ");
    scanf("%d", &size);
    printf("Enter array values\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[1];
    for (i = 0; i < size; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Greatest values are %d\n", max);
    for (i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Smallest values are %d\n", min);

    return 0;
}
