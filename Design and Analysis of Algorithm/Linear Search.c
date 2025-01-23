#include <stdio.h>
int main() {
    int arr[10], num, n, found=0, pos=-1;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for (int i=0;i<n;i++) {
         printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter value to be searched: ");
    scanf("%d",&num);
    for (int i=0;i<n;i++) {
        if (arr[i]==num) {
            found=1;
            pos=i;
            printf("%d is found at position: %d\n", num, i);
            return 0;
        }
    }
    if (found==0) {
        printf("Element not found\n");
    }
    return 0;
}

