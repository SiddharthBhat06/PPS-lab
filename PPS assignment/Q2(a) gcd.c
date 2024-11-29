#include<stdio.h>
#include<string.h>
int HCF(int n1,int n2)
{
    if(n2!=0)
        return HCF(n2,n1%n2);
    else
    
        return n1;
    
    
}
int main()
{
    int n1,n2;
    int reg;
    char nam[100];
    printf("Enter student name :");
    gets(nam);
    printf("Enter student registration number :");
    scanf("%d", &reg);
    printf("\n\n");
    printf("Student name :%s",nam);
    printf("\nStudent registration number :%d",reg);
    printf("\n\nEnter two integers :");
    scanf("%d%d", &n1, &n2);
    printf("G.C.D of %d and %d is : %d",n1,n2,HCF(n1,n2));
    return 0;
}