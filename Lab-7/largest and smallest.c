#include<stdio.h>
int main()
{   
    int pos,ele,i,size,count=0,max,min,temp;
    printf("Enter array size :");
    scanf("%d", &size);
    int arr[size];
    while(count<size){
    printf("Enter your element :");
    scanf("%d", &ele);
    printf("Enter the position :");
    scanf("%d", &pos);
    arr[pos]=ele;
    count++;
    }
    temp=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }        
    }
    min=temp;
    printf("\nSmallest number is %d", min);
    temp=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }        
    }
    max=temp;
    printf("\nLargest number is %d", max);
    return 0;
}