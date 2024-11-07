#include<stdio.h>
int main()
{
    int op,num1,num2,res;
    printf("Enter choice\n1-Addition, 2- Subtraction, 3-Multiplication, 4-Division\n");
    scanf("%d", &op);
    printf("Enter numbers :");
    scanf("%d%d", &num1,&num2);
    switch(op)
    {
        case 1:
            res=num1+num2;
            printf("sum is : %d", res);
            break;
        case 2:
            res=num1-num2;
            printf("Difference is : %d",res);
            break;
        case 3:
            res=num1*num2;
            printf("Product is : %d",res);
            break;
        case 4:
            res=num1/num2;
            printf("Quotient is : %d",res);
            break;
        default:
        printf("Unknown operation");
    }
    return 0;
}