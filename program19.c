//program to find the diameter ,circumference and area of circle from the entered radius
#include<stdio.h>
#include<math.h>
int main()
{
    float r;  //r=radius
    printf("enter the radius of circle = ");
    scanf("%f",&r);
    printf("the diameter of the circle is = %f \n",2*r); //diameter=2*r
    printf("the circumference of the cirle is = %f \n",2*3.14*r); //circumference=2*3.14*r
    printf("the area of the circle is = %f",3.14*r*r); //area=3.14*r*r
    return 1;
}