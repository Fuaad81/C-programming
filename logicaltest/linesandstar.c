#include <stdio.h>
    
int main()
{
    int height,width,i,j;
    printf("Enter patter height : ");
    scanf("%d",&height);
    printf("Enter patter width : ");
    scanf("%d",&width);

    for (i = 1; i <= height; i++)
    {
        for (j = 1; j <= width; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}