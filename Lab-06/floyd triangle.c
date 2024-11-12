#include<stdio.h>
int main()
{   int i,j=1,n;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    for(i=1;i<=(n*(n+1))/2;i++){
        printf("%d ", i);
        if(i==(j*(j+1))/2){
            printf("\n");
            j++;
        }
    }
    return 0;
}