//Write a c program to print all the even numbers from an array
#include <stdio.h>
int main()
{
    int n;
    printf("The size of the array:");
    scanf("%d", &n);
    int count=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element in the index %d:", i);
        scanf("%d", &arr[i]);
    }
    printf("The even elements are:\n");
    for (int i = 0; i < n; i++) {
        if(arr[i]%2==0)
        {
            printf("%d\t",arr[i]);
            count++;
        }
    }
    if(count==0)
        printf("There are no even numbers");

