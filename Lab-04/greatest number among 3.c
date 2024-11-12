#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n\nEnter num 1:");
    scanf("%d", &a);
    printf("\nEnter num 2:");
    scanf("%d", &b);
    printf("\nEnter num 3:");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf("\n\n%d is greatest number among 3.",a);
    }
    else if(b>a && b>c)
    {
        printf("\n\n%d is greatest number among 3.",b);
    }
    else if(c>a && c>b)
    {
        printf("\n\n%d is greatest number among the 3.",c);
    }
    else
    {
        printf("\n\nAll 3 numbers are equal\n\n");
    }
    return 0;
}