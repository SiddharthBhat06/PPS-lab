#include<stdio.h>
int HCF(int n1,int n2)
{
    if(n2!=0)
        return HCF(n2,n1%n2);
    else
    
        return n1;
    
    
}
int main()
{
    int n1,n2;
    printf("Enter two integers :");
    scanf("%d%d", &n1, &n2);
    printf("G.C.D of %d and %d is : %d",n1,n2,HCF(n1,n2));
    return 0;
}