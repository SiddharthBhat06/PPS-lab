#include<Stdio.h>
int main()
{
    int a,b;
    printf("\n\nEnter variable 1 : ");
    scanf("%d", &a);
    printf("Enter variable 2 : ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\nNow variable 1 is %d and variable 2 is %d\n\n", a,b);
    return 0;
}
