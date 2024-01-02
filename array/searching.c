#include <stdio.h>

int main()
{
    int arr[10], n, i, search;
    printf("Enter array limit : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter searching element : ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {

        if (arr[i] == search)
        {
            printf("%d value found at %d ", search, i + 1);
            return 0;
        }
    }
    printf("Value not found");

    
}