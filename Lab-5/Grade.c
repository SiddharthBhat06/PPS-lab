#include<stdio.h>
int main()
{
    float mark;
    printf("Enter your total marks :");
    scanf("%f", &mark);
    if(mark<=100 && mark>=90){
        printf("Your grade is A");
    }
    else if(mark<90 && mark>=80)
    {
        printf("Your grade is B");
    }
    else if(mark<80 && mark>=70)
    {
        printf("Your grade is C");
    }
    else if(mark<70 && mark>=60)
    {
        printf("Your grade is D");}
    else if(mark<60 && mark>50){
        printf("Your grade is E");}
    else{
        printf("Your grade is F");}
    return 0;
}