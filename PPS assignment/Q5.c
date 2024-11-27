#include<stdio.h>
int digcheck(int i)
{   
    int dig,n;
    n=i;
    while(n!=0){
        dig=n%10;
        n=n/10;
        if(dig!=9&& dig!=0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t,n,i;
    printf("Enter number of test cases (b/w 1 and 10000) :");
    scanf("%d", &t);
    if(t>0&&t<10000){
        while(t>0){
            printf("\nEnter integer N (B/w 1 and 500):");
            scanf("%d", &n);
            if(n>0&&n<=500){
                for(i=9;;i++){
                    if(digcheck(i)==1 && i%n==0){
                        printf("%d\n", i);
                        break;
                    }
                }
            }
            else{
                printf("Invalid value (not in range)");
                break;
            }
        t--;
        }
    }
    else{
        printf("Invalid value (not in range)");
    }
}