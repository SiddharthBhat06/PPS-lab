#include<stdio.h>

int Fact(int n)
{
    int fac=1,i;
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}

int main()  
{
    int n,r,com;
    printf("Enter n and r for combination :");
    scanf("%d%d",&n,&r);
    com=Fact(n)/(Fact(r)*Fact(n-r));
    printf("Combination is %d", com);
}