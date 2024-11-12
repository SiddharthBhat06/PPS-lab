#include<stdio.h>
int main()
{
    int a,fac,prime=1;
    printf("enter number :");
    scanf("%d", &a);
    for(fac=1;fac<a;fac++){
        if(fac==1){
            continue;
        }   
        if(a%fac==0){
            prime=0;
            break;
        }
    }
    if(prime==1){
        printf("%d is a Prime", a); 
    }
    else{
        printf("%d is not a prime", a);
    }
}