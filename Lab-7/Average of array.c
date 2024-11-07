#include<stdio.h>
int main()
{   int size;
    printf("Enter size of array :");
    scanf("%d", &size);
    int a[size],i;
    for(i=0;i<size;i++){
        printf("Enter number :");
        scanf("%d", &a[i]);
    }
    int sum=0;
    float avg;
    for(i=0;i<=size-1;i++){
    sum+=a[i];}
    avg=sum/(size);
    printf("%.2f", avg);
}