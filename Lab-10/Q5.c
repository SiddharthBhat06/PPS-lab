#include<stdio.h>
int main()
{
    int i,j,r1,c1;
    printf("Enter number of rows and columns for matrix :");
    scanf("%d%d", &r1,&c1);
    int a[r1][c1],rs[r1],cs[r1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter array element :");
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<r1;i++){
        rs[i]=0;
        for(j=0;j<c1;j++){
            rs[i]=rs[i]+a[i][j];
        }
    printf("Sum of row %d is :%d\n",i+1,rs[i]);
    }
    for(j=0;j<r1;j++){
        cs[j]=0;
        for(i=0;i<c1;i++){
            cs[j]=cs[j]+a[i][j];
        }
    printf("Sum of col %d is :%d\n",j+1,cs[j]);
    }
}