#include<stdio.h>
int main()
{
    int size;
    printf("Enter size :");
    scanf("%d", &size);
    int a[size],i,temp,z;
    for(i=0;i<size;i++){
        printf("Enter array element :");
        scanf("%d", &a[i]);
    }
    for(i=0;i<size;i++){
        for(z=0;z<size;z++){
            if(a[z]>a[z+1]){
            temp=a[z+1];
            a[z+1]=a[z];
            a[z]=temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d", a[i]);
    }
    return 0;
}