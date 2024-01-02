#include <stdio.h>

int main()
{
    int base ,expo;
    int power = 1;

    printf("Enter a base number");
    scanf("%d",&base);
    printf("Enter a exponent number");
    scanf("%d",&expo);

    for (int i = 1; i <= expo; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d",base, expo,power);
    
    return 0;
}
