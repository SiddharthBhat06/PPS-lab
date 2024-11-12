#include<stdio.h>
int main()
{
    int num,fac,mod,co;
    fac=1;
    co=0;
    printf("Enter number :");
    scanf("%d", &num);
    while(fac<num){
        mod=num%fac;
        if(mod==0){
          co++; 
        }
        fac+=1;
    }
    if((co>1) || (num==1)){
        printf("\n%d is a Composite number\n\n\n",num);
    }
    else{
        printf("\n%d is a Prime number\n\n\n", num);
    }
    return 0;
}