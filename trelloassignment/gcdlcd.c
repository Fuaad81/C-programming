#include <stdio.h>
int GCD();
int LCM();
int num1=5,num2=15,i,gcd,lcm;
int main(){
     
     GCD();
     LCM();
     return 0;
}
int GCD(){
    for (i=1;i<=num1 && i<=num2 ; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
        printf("gcd of %d and %d is %d\n",num1,num2,gcd);
    

    return 0;
}
int LCM(){
     for (i=1;i<=num1 && i<=num2 ; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    lcm=(num1*num2)/gcd;
     printf("LCM of %d and %d is %d",num1,num2,lcm);
     return 0;
}