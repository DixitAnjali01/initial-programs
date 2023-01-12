//program to find volume of sphere
#include<stdio.h>
#include<math.h>
int main()
{
    float r,area;
    printf("enter the radius of sphere");
    scanf("%f",&r);
    area=(4.0/3)*3.14*r*r*r;         
    printf("the volume of sphere is %f",area);
    return 0;


}