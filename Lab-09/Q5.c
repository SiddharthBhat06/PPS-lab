#include<stdio.h>
#include<math.h>
int main()
{   int dig,num=0,va,pl=0;
    printf("Enter number of digits :");
    scanf("%d", &dig);
    while(pl<dig){
        printf("Enter digit (one's to ten's):");
        scanf("%d", &va);
        num=num+(va*pow(10,pl));
        pl++;
    }
    printf("Num is : %d", num);

}