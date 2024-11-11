#include<stdio.h>
int main()
{
    int size,ele,i;
    printf("Enter size :");
    scanf("%d", &size);
    int a[size];
    for(i=0;i<size;i++){
        printf("Enter array element :");
        scanf("%d", &a[i]);
    }
    printf("Enter element to find from array :");
    scanf("%d", &ele);
    for(i=0;i<size;i++){
        if(a[i]==ele){
            printf("Element found at position %d\n", i+1);
        }
    }
}