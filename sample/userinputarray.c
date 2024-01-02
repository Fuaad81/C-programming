#include <stdio.h>

int main()
{
    int a[20],limit,i;
    printf("Enter array limit :\n");
    scanf("%d",&limit);
    printf("Enter array values :\n");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array values are :");
    for (i = 0; i < limit; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    return 0;
}