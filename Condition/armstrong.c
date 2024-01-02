#include <stdio.h>

int main()
{
    int num,original,reminder,final = 0;
    printf ("enter a three digit number");
    scanf("%d",&num);
    original = num;
    
    while (original != 0)
    {
        reminder = original % 10;
        final = final + reminder * reminder * reminder;
        original /= 10;
    }
    if (final == num)
    {
        printf("Enter number is Armstrong %d",num);
    }
    else
    {
        printf("Enter number is not armstrong number %d",num);
    }
    
    
    return 0;
}
