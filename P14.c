//Write a c program to execute :-2,4,6,5
//4,24,720,120.
#include <stdio.h>
int fact(int n)
{
    int facto=1;
    for (int i = n; i >=1 ; i--) {
        facto*=i;
    }
    return facto;
}
int main()
{
    int n;
    printf("The size of the array:");
    scanf("%d", &n);
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element in the index %d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n;i++) {
        int ans = fact(arr[i]);
        brr[i] = ans ;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",brr[i]);
    }
}
