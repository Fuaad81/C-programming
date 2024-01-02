#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three side");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3 && num3 == num1)
    {
        printf("equilateral triangle");
    }
    else if (num1 == num2 || num2 == num3 || num3 == num1)
    {
        printf("isosceles triangle");
    }
    else{
        printf("scalene triangle");
    }
    
    return 0;
}