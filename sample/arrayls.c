#include <stdio.h>
    
int main()
{
    int a[5] = {1,4,2,6,5};
    int i,max,min;
    printf("Array values :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }

    max = a[0];
    min = a[0];

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        if (a[i] < max)
        {
            max = a[i];
        }
        
    }
    printf("smallest value is %d\n",max);
    
    for (i = 0; i < 5; i++)
    {
        if (a[i] > min)
        {
            min = a[i];
        }
        
    }
    printf("greatest value is %d\n",min);
    
    
    return 0;
}