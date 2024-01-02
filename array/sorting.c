#include <stdio.h>

int main()
{
    int arr[10],i,size,temp,j;
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
        printf("%d\n",arr[i]);
    }
    
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    printf("sorted value : ");
    for (i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    
    
    return 0;
}