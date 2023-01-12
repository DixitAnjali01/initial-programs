//program to perform all arithematics operations on two entered numbers
#include<stdio.h>
#include<math.h>
int main()
{
    float n1,n2;
    printf("Enter  first number = ");
    scanf("%f",&n1);
    printf("Enter second number = ");
    scanf("%f",&n2);
    printf("The arithematic sum of two numbers is = %f \n",n1+n2); //sum=n1+n2
 printf("The arithematic product of two numbers is = %f \n",n1*n2); //product=n1*n2
 printf("The arithematic subtraction of two numbers is = %f \n",n1-n2); //subtraction=n1-n2
 printf("The arithematic division of two numbers is = %f \n",n1/n2); //division=n1/n2
 printf("The arithematic remainder of two numbers is = %d",(int)n1%(int)n2); //remainder=n1%n2
 return 0;



}