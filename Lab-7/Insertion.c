#include<stdio.h>
int main()
{   
    int pos,ele,i,size,count=0;
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
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}