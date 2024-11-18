//Q1
#include<stdio.h>
int main()
{   int day;
    enum day{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    printf("Enter number for displaying day :");
    scanf("%d", &day);
    switch(day){
        case Monday:
            printf("Monday");
            break;
        
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday:
            printf("Friday");
            break;
        case Saturday:
            printf("Saturday");
            break;
        case Sunday:
            printf("Sunday");
            break;
        default :
            printf("Invalid");
    }
    return 0;
}