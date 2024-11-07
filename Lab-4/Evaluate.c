#include<stdio.h>
int main()
{   int a=30, b=10, c=5, d=15;
    printf("\n%d",(a+b)*c/d);
    printf("\n%d",((a+b)*c)/d);
    printf("\n%d",(a+(b*c)/d));
    printf("\n%d",(a+b)*(c/d));
    return 0;
}