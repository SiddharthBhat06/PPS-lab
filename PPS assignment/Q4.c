#include<stdio.h>
int selfdiv(int n1)
{   int mod,i;
    i=n1;
    while(n1!=0)
    {      
        mod=n1%10;
        n1=n1/10;        
        if(mod==0 || i%mod!=0)
        {
            return 0;
        }

    }
    return 1;
}



int main()
{
int i,upval,lowval,len;
printf("Enter Left :");
scanf("%d",&lowval);
printf("Enter right :");
scanf("%d", &upval);
printf("\n[%d,%d]",lowval,upval);
len=(upval-lowval);
int a[len],j=0;
for(i=lowval;i<=upval;i++)
{
    if(selfdiv(i)==1)
    {
        a[j]=i;
        j++;
    }
}
printf("[");
for(i=0;i<j;i++){
    printf("%d,",a[i]);

}
printf("\b]");
}