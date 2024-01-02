#include <stdio.h>

int main()
{
    int age;
    printf("Ente your age :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
}