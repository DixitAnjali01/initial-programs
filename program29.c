//program to calculate total,average and percentage from the marks entered
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total,average,percentage;
    printf("Enter the marks of subject1=");
    scanf("%d",&s1);
     printf("Enter the marks of subject2=");
    scanf("%d",&s2);
 printf("Enter the marks of subject3=");
    scanf("%d",&s3);
 printf("Enter the marks of subject4=");
    scanf("%d",&s4);
     printf("Enter the marks of subject5=");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("Total=%d\n",total);
    average=(s1+s2+s3+s4+s5)/5;
    printf("Average=%d\n",average);
    percentage=(s1+s2+s3+s4+s5)*100/5;
    printf("Percentage=%d",percentage);
    return 0;
}


