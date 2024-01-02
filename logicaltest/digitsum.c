#include <stdio.h>
    
int main()
{
    int num[10],size,i,sum = 0;
    printf("enter array size : ");
    scanf("%d",&size);
    for (i =1; i <= size; i++)
    {
        scanf("%d",&num[i]);
    }
    for (i = 1; i <= size; i++)
    {
        printf("%d",num[i]);
    }
    printf("\n");
    for (i = 1; i <= size; i++)
    {    
    sum = sum + num[i];
    
    }
    printf("Array sum is = %d ",sum);
    
    return 0;
}