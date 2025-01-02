//Write a c program to find average of array elements.
#include <stdio.h>
int main()
{
    int n;
    float sum=0.0;
    printf("The size of the array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element in the index %d:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    float avg=sum/n;
    printf("The average of the elements in the array is:%f",avg);
}
