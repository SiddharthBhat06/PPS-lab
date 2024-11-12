#include<stdio.h>
int main()
{
    int ele,size,i=0,pos;
    printf("Enter size of array :");
    scanf("%d", &size);
    int a[size];
    printf("Enter array elements :");
    while(i<size){
        scanf("%d", &a[i]);
        i++;
    }
    for(i=0;i<size;i++){
        printf("%d", a[i]);
    }
    printf("Enter number to remove :");
    scanf("%d", &ele);
    for(i=0;i<size;i++){
        if(a[i]==ele){
            for(pos=i;pos<=size-1;pos++){
                a[pos]=a[pos+1];
            }
            size=size-1;

        }
    }
    for(i=0;i<size;i++){
        printf("%d", a[i]);
    }
}