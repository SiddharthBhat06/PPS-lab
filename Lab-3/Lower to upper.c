#include<stdio.h>
int main()
{
    char c;
    char up;
    printf("\n\n\nEnter lowercase character for conversion :");
    scanf("%c", &c);
    up=c-32;
    printf("\n\nThe uppercase character of %c is : %c \n\n", c,up);
    return 0;
}