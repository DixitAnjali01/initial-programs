//program to find area of triangle using base and height 
#include<stdio.h>
#include<math.h>
int main()
{
    float b,h; //b= base, h=height
    printf("Enter the base = ");
    scanf("%f",&b);
   printf("Enter the height = ");
   scanf("%f",&h);
   printf("The area of triangle is = %f",(1.0/2)*b*h);
   return 0;
    
}