#include<stdio.h>
int main()
{
    int reg;
    char nam[100];
    printf("Enter student name :");
    gets(nam);
    printf("Enter student registration number :");
    scanf("%d", &reg);
    printf("\n\n");
    printf("Student name :%s",nam);
    printf("\nStudent registration number :%d",reg);
    
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