#include <stdio.h>

int main() 
{
    int num1,num2,num3;
    printf("Enter three number\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("Greatest number is : %d\n",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Greatest number is : %d\n",num2);
    }
    else{
        printf("Greatest number is : %d\n",num3);
    }
    if (num1 < num2 && num1 < num3)
    {
        printf("Lesser number is : %d\n",num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("lesser number is : %d\n",num2);
    }
    else{
        printf("lesser number is : %d\n",num3);
    }
    
    
}