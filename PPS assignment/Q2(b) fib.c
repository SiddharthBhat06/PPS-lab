#include<stdio.h>
#include<string.h>
int fib(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else{
        return fib(n-1)+fib(n-2);
    }

}
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
    int n,i;
    printf("\nEnter nth term :");
    scanf("%d", &n);
    printf("Fibonacci series gives :");
    for(i=1;i<=n;i++)
    {
        printf("%d ", fib(i));
    }
}