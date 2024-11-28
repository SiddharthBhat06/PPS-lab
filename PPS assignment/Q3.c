#include<stdio.h>
void main(){
    int arr[100];
    int k,n,t,f;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter value of k :");
    scanf("%d",&k);
    printf("Enter element to find :");
    scanf("%d",&t);
    for(int i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<k/2;i++){
        int temp=arr[i];
        arr[i]=arr[k-i-1];
        arr[k-1-i]=temp;
    }

    for(int i=k;i<(n+k)/2;i++){
        int temp=arr[i];
        arr[i]=arr[n+k-1-i];
        arr[n-1+k-i]=temp;
    }
    int jo=0;
    printf("[");
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            f=i; jo++;
        }
        printf("%d,",arr[i]);
    }
    printf("\b]");
    if (jo==0)
        printf("\n%d",-1);
    else
        printf("\n%d",f);
}