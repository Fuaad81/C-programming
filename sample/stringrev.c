#include <stdio.h>
#include <strings.h>
    
int main()
{
    char a[10];
    int i;
    printf("Enter a name : ");
    for (i = 0; i <= 10; i++)
    {
        scanf("%c",&a[i]);   
    }
    printf("Entered name is : ");
    for (i = 0; i <= 10; i++)
    {
        printf("%c",a[i]);
    }
    
    for (i = 10; i >= 0; i--)
    {
        printf("%c",a[i]);
    }
    
    
    
    return 0;
}