//program to compute quotient and remainder
#include<stdio.h>
int main()
{
    int divisor,dividend;
    printf("enter divisor");
    scanf("%d",&divisor);
    printf("enter dividend");
    scanf("%d",&dividend);
    printf("The quotient of the  numbers is = %d",divisor/dividend);
    printf("The remainder of the numbers is %d",divisor%dividend);
    return 0;
}