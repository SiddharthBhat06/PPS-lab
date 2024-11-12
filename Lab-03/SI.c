#include<stdio.h>
int main()
{
    float p;
    float r;
    float t;
    float I;
    printf("\n\nEnter the principal amount : ");
    scanf("%f", &p);
    printf("\n\nEnter the rate of interest in %% ");
    scanf("%f", &r);
    printf("\n\nEnter the time period for interest : ");
    scanf("%f", &t);
    I=(p*r*t)/100;
    printf("\n\nThe interest for %.2f principal, %.2f%% ROI and %.2f time period is : %.2f \n\n", p, r, t, I);
    return 0;
}