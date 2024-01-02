#include <stdio.h>
    
int main()
{
    int i,j,s,n=5;
    for(i=n;i>=1;i--){
        for(s=i;s<n;s++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
      }
        printf("\n");
    }
     
     for(i=2;i<=n;i++){
         for(s=i;s<n;s++){
             printf(" ");
         }
         for(j=1;j<=i;j++){
             printf("* ");
         }
         printf("\n");
  }
}