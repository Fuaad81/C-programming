#include <stdio.h>
int main()
{
    int b;
    float avg = 0,y[100];
    printf("Enter array limit : ");
    scanf("%d",&b);
    printf("Enter array values \n");
    for (int i = 0; i < b; i++)
    {
        scanf("%f",&y[i]);
        avg += y[i];
    }printf("sum : %0f",avg);
    avg /= b;
    printf("Average number is %f",avg);
    
    return 0;
}