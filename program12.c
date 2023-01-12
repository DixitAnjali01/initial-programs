//program to find the area of trapezium
#include<stdio.h>
#include<math.h>
int main()
    {
        float p1,p2,ht;//p1,p2=parallel sides,ht=height
        printf("Enter the parallel side");
        scanf("%f",&p1);
        printf("Enter another parallel side");
        scanf("%f",&p2);
        printf("Enter the height");
        scanf("%f",&ht);
        printf("The area of trapezium is = %f",(1.0/2)*(p1+p2)*ht);
        return 0;

    }
