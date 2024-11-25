#include<stdio.h>
#include<string.h>
int main()
{   
    char a[1000],tem;
    int len,i,en;
    printf("Enter string :");
    gets(a);
    len = strlen(a);
    for(i=0;i<len/2;i++){
        tem=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=tem;
    }
    for(i=0;i<len;i++){
        if(a[i]!=a[len-1-i]){
            en=0;
        }
    }
    if(en==0){
        printf("Not a palindrome");
    }
    else{
        printf("Is a palindrome");
    }

}