//Q3
#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum,mod,temp,len;
    printf("Enter your number :");
    scanf("%d", &num);
    temp=num;
    sum=0;
    len=0;
    while(num!=0){
        num=num/10;
        len++;
    }
    num=temp;
    while(num!=0){
        mod=num%10;
        sum+=pow(mod,len);
        num=num/10; 
    }
    if(temp==sum){
        printf("\n\nYes %d is an armstrong number.\n\n", temp);
    }
    else{
        printf("\n\nNo %d is not an armstrong number.\n\n", temp);
    }
    return 0;
}