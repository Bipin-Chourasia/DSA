//Write a c program to check the total number of values from an array
#include <stdio.h>
int  main()
{
    int n,count;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the element in index %d:",i);
        scanf("%d",&a[i]);
    }
    printf("The array is:");
    for (int i = 0; i <n ;i++) {
        printf("%d ",a[i]);
    }
    count=n/4;
    printf("The no. of elements in the array:%d",count);
}
