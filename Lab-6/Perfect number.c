#include<stdio.h>
#include<math.h>
int main()
{   int num,mod,sum,step;
    sum=0;
    printf("Enter number :");
    scanf("%d", &num);
    for(step=1;step<num;step++){
        mod=num%step;
        if(mod==0)
        {sum+=step;}
    }
    if(sum==num){
        printf("\nYes %d is a perfect number\n\n",num);
    }
    else{
        printf("\nNo %d is not a perfect number\n\n", num);
    }
    return 0;

}