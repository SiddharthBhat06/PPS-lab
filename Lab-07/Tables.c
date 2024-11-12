#include<stdio.h>
int main()
{
    int n,k,a,b;
    printf("Enter the value to return table till :");
    scanf("%d", &n);
    printf("Enter value till which multiplication should occur :");
    scanf("%d", &k);
    for(a=1;a<n+1;a++){
        printf("The table of %d is :\n", a);
        for(b=1;b<k+1;b++){
            printf("%dx%d=%d\n", a,b,a*b);
        }
    }
    return 0;
}