//program to convert temperature in   celsius into fahrenheit
#include<stdio.h>
#include<math.h>
int main()
{
    float C;
    printf("Enter the temperature in celsius = ");
    scanf("%f",&C);
    printf("The tmperature in fahrenheit is = %f ", C*(9.0/5)+32); //F=C*(9/5)+32
    return 0;
}