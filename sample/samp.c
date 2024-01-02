#include <stdio.h>

int main()
{
    char a[4][10] = {"FUAAD","SHAKIR","ABHINAV","MANJIMA"};

    printf("String array elements are : \n");

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",a[i]);
    }
    
    return 0;
}