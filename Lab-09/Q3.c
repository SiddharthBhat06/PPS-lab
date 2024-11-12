#include<stdio.h>
int main()
{   int size,mid,i=0,ele,low=0;
    printf("Enter size of array :");
    scanf("%d",&size);
    int a[size],high=size-1;
    for(i=0;i<size;i++){
        printf("Enter array elements :");
        scanf("%d", &a[i]);
    }
    printf("Enter element to find in array :");
    scanf("%d", &ele);
    mid=size-1/2;
    do{
        mid=(low+high)/2;
        if(ele<a[mid]){
            high=mid-1;
        }
        else if(ele>a[mid]){
            low=mid+1;
        }
    }while(ele!=a[mid] && low<high);
    printf("Element is at position :%d", mid);
}



