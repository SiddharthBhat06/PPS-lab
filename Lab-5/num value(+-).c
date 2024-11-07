#include<stdio.h>
int main()
{   int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    if(num>0){
        printf("\nNumber is positive");
    }
    else if(num<0){
        printf("\nNumber is negative");
    }
    else
    {
        printf("\nNumber is 0");
    }
    return 0;
}