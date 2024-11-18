#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter n limit (inclusive) :");
    scanf("%d", &n);
    while(i>0 && i<=n){
        printf("%d\n",i);
        i++;
    }
}