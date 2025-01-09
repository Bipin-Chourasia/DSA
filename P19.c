//Write a C program to check a number is prime or not using function with pointer.
#include <stdio.h>
void checkPrime(int *n, int *isPrime)
{
    *isPrime = 1;
    if (*n <= 1)
    {
        *isPrime = 0;
        return;
    }
    for (int i = 2; i * i <= *n; i++)
    {
        if (*n % i == 0)
        {
            *isPrime = 0;
            return;
        }
    }
}
int main()
{
    int n,p;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &n);
    checkPrime(&n, &p);
    if (p)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
