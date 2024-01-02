#include <stdio.h>

int main()
{
  int value;
  printf("enter a number");
  scanf("%d",&value);
  
  for(int i = 0; i<=value; i++){ 
    for(int j = 1; j <= i; j++){
      printf(" *");
    }
    printf("\n");
  }
}
