#include <stdio.h>
void sum(int, int);
int main()
{
    int a, b, result;
    printf("Enter two number");
    scanf("%d%d", &a, &b);
    sum(a, b);
    
}
void sum(int a, int b)
{
    printf("result is : %d", a + b);
    
}
