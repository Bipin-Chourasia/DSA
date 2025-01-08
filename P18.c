//Write a C program to calculate the factorial of a given number using function with pointer.
#include <stdio.h>
void factorial(int *n, int *result)
{
    *result = 1;
    for (int i = 1; i <= *n; i++)
    {
        *result *= i;
    }
}
int main() {
    int n;
    int fact;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    factorial(&n, &fact);
    printf("The factorial of %d is %d\n", n, fact);
}
