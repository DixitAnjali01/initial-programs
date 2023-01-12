//program to convert temperature in fahrenheit into celsius
#include<stdio.h>
#include<math.h>
int main()
{
    float F;
    printf("Enter the temperature in fahrenheit = ");
    scanf("%f",&F);
    printf("The tmperature in celsius is = %f ", (F-32)*(5.0/9)); //F=C*(9/5)+32
    return 0;
}