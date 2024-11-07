#include<stdio.h>
int main()
{   
    int pos,ele,i,size,count=0,fac,co;
    printf("Enter array size :");
    scanf("%d", &size);
    int arr[size];
    while(count<size){
    printf("Enter your element :");
    scanf("%d", &ele);
    printf("\nEnter the position :");
    scanf("%d", &pos);
    arr[pos]=ele;
    count++;
    }
    for(i=0;i<size;i++){
        co=0;
        fac=1;
        while(fac<arr[i]){
            if(arr[i]%fac==0){
                co++;
            }
            fac++;
        }
        if(co<2 && arr[i]!=1){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
