#include<stdio.h>
int mult(int n1, int n2)
{
    if(n1>n2){
    return mult(n2,n1);
    }
    else if(n2!=0)
    {
        return n1+mult(n1,n2-1);
    
    }
    else{
        return 0;
    }
}

int main()
{
    int n1,n2;
    printf("Enter two numbers :");
    scanf("%d%d", &n1,&n2);
    printf("Product is : %d",mult(n1,n2));
}