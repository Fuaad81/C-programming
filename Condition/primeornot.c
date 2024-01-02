#include <stdio.h>

int main(){
    int number;
    printf("Enter a number");
    scanf("%d",&number);

    if (number%2 == 0)
    {
        printf("Number is prime %d",number);
    }
    else{
        printf("number is not prime %d",number);
    }
    return 0;
}