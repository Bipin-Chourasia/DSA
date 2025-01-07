//Write a c program to print the memory address of the smallest array element.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements in index %d:", i);
        scanf("%d", &arr[i]);
    }
    int smallest=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=i;
        }
    }
    printf("The index of the smallest element in the array is: %d", smallest);
}
