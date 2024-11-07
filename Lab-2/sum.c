#include<stdio.h>
int main()
{
    int a; 
    int b;
    int sum;
    printf("Input integer a : ");
    scanf("%d", &a);
    printf("Input integer b : ");
    scanf("%d", &b);
    sum=a+b;
    printf("sum of integers %d and %d is %d", a,b,sum);
    return 1;
}