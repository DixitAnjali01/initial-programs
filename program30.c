//program to calculate principal interest
#include<stdio.h>
int main()
{
    int p,r,t,interest;
    printf("enter principal  in rupees=");
    scanf("%d",&p);
     printf("enter rate in percentage=");
    scanf("%d",&r);
     printf("enter time in years=");
    scanf("%d",&t);
    interest=(p*r*t)/100;
    printf("The principal inetrest is=%d",interest);
    return 0;
    
    
}
