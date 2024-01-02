#include <stdio.h>

int main()
{
    int arr[10],i,size,add;
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
    
    printf("\nEnter new number for adding : ");
    scanf("%d",&add);
    size = size + 1;
    for (i = size - 1; i < size; i++)
    {
        arr[i] = arr[i+1];
        arr[i] = add;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}