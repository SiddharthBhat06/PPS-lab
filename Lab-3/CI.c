#include<stdio.h>
#include<math.h>
int main()
{
    float p,a,I,r;
    int t,n;
    printf("\n\nEnter the principal amount : ");
    scanf("%f", &p);
    printf("\n\nEnter the rate of interest in %% :");
    scanf("%f", &r);
    printf("\n\nEnter the number of times of interest application :");
    scanf("%d", &n);
    printf("\n\nEnter the time period for interest calculation :");
    scanf("%d", &t);
    a=p*(pow((1+(r/100)/n),n*t));
    I=a-p;
    printf("\n\nThe compound interest for principal amount : %f, ROI :%f, number of interest application per year : %d, time period : %d is = %f \n\n", p,r,n,t,I);
    return 0;
}