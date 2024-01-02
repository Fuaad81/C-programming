#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of pyramid : ");
    scanf("%d",&size);
    printf("\n");
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}
