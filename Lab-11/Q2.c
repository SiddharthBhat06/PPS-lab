#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[1000];
    printf("Enter your string :");
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>'A' && a[i]<'Z'){
            a[i]+=32;
        }
    else if(a[i]<'z' && a[i]>'a'){
            a[i]-=32;
        }
    else{
        continue;
    }
    }
    puts(a);
}