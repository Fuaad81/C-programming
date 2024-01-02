#include <stdio.h>

int main()
{
char c;
    int choice, num1, num2;
    do
    {

        printf("1 Addition\n2 Substraction\n2 Multiplication\n4 Divistion\n5 Mudulus\n6 Exit\n\tEnter your choice.....");
        scanf("%d", &choice);
        printf("Enter two number\n");
        scanf("%d%d", &num1, &num2);
        switch (choice)
        {
        case 1:
            printf("Result is : %d", num1 + num2);
            break;
        case 2:
            printf("Result is : %d", num1 - num2);
            break;
        case 3:
            printf("Result is : %d", num1 * num2);
            break;
        case 4:
            printf("Result is : %d", num1 / num2);
            break;
        case 5:
            printf("Result is : %d", num1 % num2);
            break;
        case 6:
            printf("Exit...");
            break;
        default : 
            printf("Enter a valid number.......");
            break;
        }
        scanf("%c",&c);
    } while (c == 'y');

    return 0;
}
