//program to convert entered length(centimeteres) into meters and kilometers
#include<stdio.h>
#include<math.h>
int main()
{
    float l;
    printf("Enter the length (centimetres) = ");
    scanf("%f",&l);
    printf("The length in metres is = %fm \n",l/100);  //1 meter = 100 centimeter
    printf("The length in kilometres is = %fkm \n",l/100000);  //1 kilometer = 100000 centimeter
    return 0;
} 