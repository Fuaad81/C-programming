#include <stdio.h>

int main()
{
  int value;
  printf("enter a number");
  scanf("%d",&value);
  
  for(int i = 1; i<=value; i++){
    for(int j = i; j <= value; j++){
      printf("* ");
    }
    printf("\n");
  }
}