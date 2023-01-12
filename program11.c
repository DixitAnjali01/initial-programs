//program to find the area of triangle using heron's formula
#include<stdio.h>
#include<math.h>
 int main()
 {
    int s,a,b,c ;
    printf("Enter the side a");
    scanf("%d",&a);
    printf("Enter the side b");
    scanf("%d",&b);
    printf("Enter the side c");
    scanf("%d",&c);
    s=(a+b+c)/2;
    float d;
    d=s*(s-a)*(s-b)*(s-c);

    printf("The area of triangle is =%f",sqrt(d));
    return 0;
 }