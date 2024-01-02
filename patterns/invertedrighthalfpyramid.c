#include<stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf(" %d",&rows);
    printf("\n");

    
    printf("****--Left Pyramid---****\n");
    printf("\n");
    for(int i=0; i<rows; i++)
    {
        for(int l=0;l<rows-1-i;l++)
        {
            printf("  ");
        }
        for(int j=0; j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}