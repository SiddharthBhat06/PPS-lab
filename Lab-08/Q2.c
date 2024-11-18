//Q2
#include<Stdio.h>
int main()
{
    int num,prime=0,comp=0,co=0,fac=1;
    do{
        printf("Enter numbers :");
        scanf("%d", &num);
        printf("%d\n", num);
        co=0;
        for(fac=1;fac<=num;fac++){
            if(num%fac==0){
                co++;
            }
        }
        if(co>2 && num!=1 && num!=-1){
            comp++;
        }
        else if(co=2 && num!=1 && num!=-1){
            prime++;
        }

    }while(num!=-1);
printf("There were %d prime numbers", prime);
printf("\nThere were %d composite numbers", comp);
return 0;
}