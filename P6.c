//Write a program to check elements of 2 arrays are equal or not.
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("The size of the arrays:");
    scanf("%d", &n);
    int arr[n],brr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array 1 in the index %d:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter element of array 2 in the index %d:",i);
        scanf("%d",&brr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=brr[i])
        {
            count++;
        }
    }
    if(count==0)
        printf("The arrays are equal.");
    else
        printf("The arrays are not equal.");
}
