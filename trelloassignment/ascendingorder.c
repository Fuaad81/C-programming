#include <stdio.h>

int main()
{
    int a[5],limit,i,temp;
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter array values \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < limit; i++)
    {
        for (int j = i + 1; j < limit; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("Values are : ");
    for ( i = 0; i < limit; i++)
    {
        printf("%d",a[i]);
    }
    
    
    return 0;
}
