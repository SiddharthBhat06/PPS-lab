#include<stdio.h>
int main()
{
    char a[100],b[100]="";
    int i,len,j;
    printf("Enter your string :");
    gets(a);
    len=strlen(a);
    j=0;
    for(i=0;i<(len-1);i++){
        if(a[i]>=41 && a[i]<=57){
            b[j]=a[i];
            j++;
        }
    }
    puts(b);
}