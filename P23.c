//Write a c program to add 2 arrays.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of the array in index %d:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of the array in index %d:",i);
        scanf("%d",&brr[i]);
    }
    for (int i = 0; i < n; i++){
        sum[i]=arr[i]+brr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf("Sum= %d ", sum[i]);
    }
}
