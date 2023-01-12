//program to find power of any  number x^y
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("enter the value of x = ");
    scanf("%f",&x);
    printf("enter the value of y = ");
    scanf("%f",&y);
    printf("the value of x to the power y is %f ",pow(x,y));
    return 0;
    
}