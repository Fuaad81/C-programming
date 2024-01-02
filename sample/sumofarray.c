#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {5,4,3,2,1};
    int sum[5],i,j;

    for ( i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("sum result [%d] = %d\n",i,sum[i]);
    }
    
    
    
    return 0;
}