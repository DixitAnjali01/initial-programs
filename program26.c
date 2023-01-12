//PROGRAM TO ENTER TWO ANGLES OF TRIANGLE AND FIND THIRD ANGLE
#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C;
    printf("Enter the first angle = ");
    scanf("%f",&A);
     printf("Enter the second angle = ");
    scanf("%f",&B);
    printf("The third angle(C) of the triangle is = %f",180-(A+B)); //A+B+C=180
    return 0;   
}