//program to calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t,n,a,b ,ci;
    printf("enter principal  amount in rupees=");
    scanf("%d",&p);
     printf("enter rate in percentage=");
    scanf("%d",&r);
     printf("enter time in years=");
    scanf("%d",&t);
    printf("enter no of times you want to calculate compound interest");
    scanf("%d",&n);
    a=p*(1+(r/n));
    b=n*t;
    
    ci=pow(a,b);
    printf("The compound is=%d", ci);
    return 0;
    
    
}

