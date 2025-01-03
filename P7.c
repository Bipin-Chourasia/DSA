//Write a program to check whether the sums of 2 arrays are same.
#include <stdio.h>
int main()
{
    int n;
    int sum1=0,sum2=0;
    printf("Enter size:");
    scanf("%d",&n);
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
        sum1+=arr[i];
    for (int i = 0; i < n; i++)
        sum2+=arr[i];
    if (sum1==sum2)
        printf("The sum of the arrays are equal.");
    else
        printf("The sum of the arrays are not equal.");
}
