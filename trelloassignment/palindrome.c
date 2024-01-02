#include <stdio.h>

int main()
{
    int num,original,reminder,reversed = 0;
    printf("Enter a number");
    scanf("%d",&num);
    original = num;

    while (num != 0)
    {
        reminder = num % 10;
        reversed = reversed * 10 + reminder;
        num /= 10;
    }

    if (original == reversed)
    {
        printf("Enter number is palindrome %d",original);
    }
    else
    {
        printf("Enter number is not palindrome %d",original);
    }
    
    
    return 0;
}
