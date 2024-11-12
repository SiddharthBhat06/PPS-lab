#include<stdio.h>
#include<math.h>
int main()
{
    int num,rev,temp,mod,len;
    printf("\nEnter the number :");
    scanf("%d", &num);
    rev=0;
    len=0;
    temp=num;
    while(num!=0){
        num=num/10;
        len++;}
    num=temp;
    while(num!=0){
        mod=num%10;
        num=num/10;
        rev+=mod*pow(10,len-1);
        len--;
    }
    if(rev==temp){
        printf("\n\nYes %d is a palindrome number.\n\n", temp);
    }
    else{
        printf("\n\nNo %d is not a palindrome number.\n\n", temp);}
    return 0;


}


