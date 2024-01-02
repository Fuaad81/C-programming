#include <stdio.h>
#include <string.h>
    
int main()
{
    int i,j,len;
    char s[] = "FLUTTER";
    len = strlen(s);
    for ( i = 0; i < len; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ",s[j]);
        }
        
        printf("\n");
    }
    // char a[100];
    // char len,i,j,k;
    // printf("Enter a name : ");
    // for (i = 0; i < 100; i++)
    // {
    //     scanf("%c",a[i]);
        
    // }
    // len = strlen(a);
    // for (j = 0; j < len; j++)
    // {
    //     for (k = 0; k < j; k++)
    //     {
    //         printf("%c",a[k]);
    //     }
    //     printf("\n");
    // }
    
    
    return 0;
}
