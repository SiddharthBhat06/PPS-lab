#include<stdio.h>
int main()
{
    int ro1,co1,i,j;
    printf("Enter number of rows of matrix A :");
    scanf("%d", &ro1);
    printf("Enter number of cols of matrix A :");
    scanf("%d", &co1);
    int a[ro1][co1];
    for(i=0;i<ro1;i++){
        for(j=0;j<co1;j++){
            printf("Enter array element :");
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Matrix A:\n");
    for(i=0;i<ro1;i++){
        for(j=0;j<co1;j++){
            printf("%d\t", a[i][j]);
        }
    printf("\n");
    }
    int sum=0;
    for(i=0;i<ro1;i++){
        for(j=0;j<co1;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("Trace of matrix A is :%d", sum);
}