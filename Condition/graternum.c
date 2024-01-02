#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);

    if (a > b)
    {
        
        printf("Greatest number is : %d",a);
    }
    if ( b > c)
    {
        printf("Greatest number is : %d",b);
    }
    if (c > a )
    {
        printf("Greatest number is : %d",c);
    }


    return 0;
    
}


