//Write a C program to calculate the factorial of a given number using recursion.
#include <stdio.h>
int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n* fact(n-1);
}
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    int f= fact(a);
    printf("The Factorial is:%d",f);
}
