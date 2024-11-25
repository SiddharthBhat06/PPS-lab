#include<stdio.h>
#include<string.h>
int main()
{   char a[100],w[100];
    int i,j,ls,lw,temp,chk=0;
    printf("Enter string :");
    gets(a);
    printf("Enter word to delete from string :");
    gets(w);
    ls=strlen(a);
    lw=strlen(w);
    for(i=0;i<ls;i++){
        temp=i;
        for(j=0;j<lw;j++){
            if(a[i]==w[j]){
                i++;
            }
        }
        chk=i-temp;
        if(chk==lw){
            i=temp;
            for(j=i;j<(ls-lw);j++){
                a[j]=a[j+lw];}
            ls=ls-lw;
            a[j]='\0';
            
        }
    }
    printf("Modified string is :%s", a);
}