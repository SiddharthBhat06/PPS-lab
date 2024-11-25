#include<stdio.h>
int CornerSum(int ro,int co)
{   
    int a[ro][co],sum=0,i,j;
    for(i=0;i<ro;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("Enter element :");
            scanf("%d", &a[i][j]);
        }
    }
    sum=a[0][0]+a[0][co-1]+a[ro-1][0]+a[ro-1][co-1];
    return sum;
}

int main()
{   int ro,co,su;
    printf("Enter number of rows and columns :");
    scanf("%d%d",&ro,&co);
    su=CornerSum(ro,co);
    printf("The Sum of the four corners of the matrix is : %d",su);
}