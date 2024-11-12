#include<stdio.h>
int main()
{
    int r;
    float area;
    printf("Enter radius of the circle : ");
    scanf("%d", &r);
    area=3.14*r*r;
    printf("Area of circle is %.2f", area);
    return 2;
}