#include <stdio.h>

int main()
{
    int arr[10],i,size;
    printf("Enter array size ");
    scanf("%d",&size);
    printf("Enter array numbers :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array numbers : \n");
    for (i= 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}