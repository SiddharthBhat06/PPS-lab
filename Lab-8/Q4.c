#include<stdio.h>
int main()
{
    int i,z,n,fac=0;
    printf("Enter n limit :");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fac=0;
        for(z=1;z<=n;z++){
            if(i%z==0){
                fac++;
            }
        }
    if(fac==2){
        printf("%d\n", i);
    }
    }

}