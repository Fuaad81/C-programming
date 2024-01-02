#include <stdio.h>

int value = 20;
void aa();
int main()
{
    aa();
    printf("%d",value);
}
void aa(){
value=50;
}