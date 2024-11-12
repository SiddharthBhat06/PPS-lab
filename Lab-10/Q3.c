#include<stdio.h>
int main()
{
    int ro1,ro2,co1,co2,i,j,k,l;
    printf("Enter number of rows for matrix A :");
    scanf("%d", &ro1);
    printf("Enter number of cols for matrix A :");
    scanf("%d", &co1);
    printf("Enter number of rows for matrix B :");
    scanf("%d", &ro2);
    printf("Enter number of cols for matrix B :");
    scanf("%d", &co2);
    if(ro1==ro2 &&co1==co2){
        int A[ro1][co1],B[ro2][co2],C[ro1][co1];
        for(i=0;i<ro1;i++){
            for(j=0;j<co1;j++){
            printf("Enter array element for matrix A :");
            scanf("%d", &A[i][j]);
            }
        }
        for(k=0;k<ro2;k++){
            for(l=0;l<co2;l++){
            printf("Enter array element for matrix B :");
            scanf("%d", &B[k][l]);
            }
        }
        for(i=0;i<ro1;i++){
            for(j=0;j<co1;j++){
                C[i][j]=0;
                for(k=0;k<co1;k++){
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
        for(i=0;i<ro1;i++){
            for(j=0;j<co2;j++){
                printf("%d\t", C[i][j]);
            }
        printf("\n");
        }
    }
}