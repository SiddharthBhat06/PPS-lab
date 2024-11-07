#include<stdio.h>
#include<math.h>
int main()
{   int d;
    float dis,root1,root2,re,im,a,b,c;
    printf("Enter values of a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis<0)
    {    d=1;}
    else if(dis>0)
    {
        d=2;
    }
    else
    {
        d=3;
    }
    switch(d){
        case 1:
            printf("Imaginary roots:\n");
            re=-b/(2*a);
            im=pow(fabs(dis),0.5)/(2*a);
            printf("Root 1 = %.2f+%.2fi and root 2=%.2f-%.2fi",re,im,re,im);
            break;
        case 2:
            printf("Real and equal roots:\n");
            re=-b/(2*a);
            printf("Root 1 and root 2 are : %.2f",re);
            break;
        case 3:
            printf("Real and distinct roots:\n");
            root1=(-b+sqrt(dis))/(2*a);
            root2=(-b-sqrt(dis))/(2*a);
            printf("Root 1 = %.2f and root 2 = %.2f",root1,root2);
            break;
    }
    return 0;
}