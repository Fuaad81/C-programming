#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    for (int i = num; i >= 0; i--)
    {
        printf("%d\t",i);
    }
    
    return 0;
}
