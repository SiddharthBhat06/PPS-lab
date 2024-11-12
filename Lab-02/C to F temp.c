#include<stdio.h>
int main()
{
    float t1,t2;
    printf("Enter temperature in celsius : ");
    scanf("%f", &t1);
    t2=(t1*9/5)+32;
    printf("The temperature in fahrenheit is %f fahrenheit", t2);
    return 3;
}