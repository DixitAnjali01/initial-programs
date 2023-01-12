//program to calculate the area of equilateral triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float side;
    printf("enter the side of traiangle is = ");
    scanf("%f",&side);
    printf("The area of traiangle is = %f",(1.732/4)*side*side);
    return 0;
}