#include<stdio.h>
int main()
{
    char c;
    char lo;
    printf("\n\n\nEnter uppercase character for conversion :");
    scanf("%c", &c);
    lo=c+32;
    printf("\n\nThe lowercase character of %c is : %c \n\n", c,lo);
    return 0;
}