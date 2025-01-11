//Write a C program to calculate the number of digits in a given number using recursion.
#include <stdio.h>
int dig(int n)
{
    if(n==0)
        return 0;
    else
        return 1+ dig(n/10);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0)
        printf("The number of digits is 1");
    else
        printf("The number of digits are:%d", dig(n));
}
