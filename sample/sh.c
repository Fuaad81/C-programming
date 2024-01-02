#include <stdio.h>
    
int main()
{
    int n=10,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%2==0){
                
            printf("%d ",j);
            }
        }
        printf("\n");
        
    }
    
    return 0;
}