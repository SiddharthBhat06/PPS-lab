#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n%2!=0)
    {
        printf("The number %d is odd", n);
    }
    else
    {
        printf("The number %d is even", n);
    }
    return 5;
}