// program to find ascii values of a character
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character = ");
    scanf("%c",&ch);
    int ascii_value;
    ascii_value = ch;
    printf("the ascii value of the character entered is = %d",ascii_value);
    return 0;
}