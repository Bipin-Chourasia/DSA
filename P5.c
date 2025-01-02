//Write a program in c to copy one array elements into another array.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);
    int arr[n],brr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements in index %d:",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    printf("Elements of the destination array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",brr[i]);
    }
}
