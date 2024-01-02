#include <stdio.h>
#include <string.h>
    
int main()
{
    char a[10];
    int limit,i;
    printf("Enter array limit");
    scanf("%d",&limit);

    for (i = 0; i <= limit; i++)
    {
        scanf("%c",&a[i]);
        
    }
    printf("Array values are :");
    for ( i = 0; i <= limit; i++)
    {
        printf("%c",a[i]);
    }
    
    
    
    return 0;
}