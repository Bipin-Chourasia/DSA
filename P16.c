//Write a c program to print the reverse of an array.
#include <stdio.h>
int main() {
    int n;
    printf("The size of the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element in the index %d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n/2; i++) {
        int temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}
