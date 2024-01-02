#include <stdio.h>
#include <string.h>
    
int main()
{
    char name[10][50] = {"1 BMW","2 MCLAREN","3 PORSCHE","4 BENZ","5 MUSTANG","6 AUDI","7 ROLLS ROYCE","8 BUGATTI","9 FERRARI","10 DODGE"};

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n",name[i]);
    }
    
    return 0;
}