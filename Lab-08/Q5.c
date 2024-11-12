#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter n limit :");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}