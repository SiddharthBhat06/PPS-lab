#include<stdio.h>
#include<string.h>
int main()
{   char str[1000];
    printf("Enter :");
    gets(str);
    int i=0,co=1;
    while(str[i]!='\0'){
        if(str[i]==' ' && str[i+1]!=' '){
            co++;
        }
    i++;
    }
    printf("Number of words :%d", co);
}