//Write a C program to add between two numbers using function with pointers.
#include <stdio.h>
void addNumbers(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
int main() {
    int m, n, sum;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    addNumbers(&m, &n, &sum);
    printf("The sum of %d and %d is %d\n", m, n, sum);
}
