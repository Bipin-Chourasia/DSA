#include <stdio.h>
void merge(int arr[], int lb, int m, int r) {
    int i, j, k;
    int n1=m - lb + 1;
    int n2=r - m;
    int L[n1], R[n2];
    for (i=0; i<n1; i++)
        L[i]=arr[lb+i];
    for (j=0; j<n2; j++)
        R[j]=arr[m + 1 + j];
    i=0;
    j=0;
    k=lb;
    while(i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            arr[k]=L[i];
            i++;
        } else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int lb, int r) {
    if (lb<r){
        int m=lb+(r-lb)/2;
        mergesort(arr, lb, m);
        mergesort(arr, m + 1, r);
        merge(arr, lb, m, r);
    }
}

void printArray(int A[], int size) {
    for (int i=0; i<size; i++)
        printf("%d ",A[i]);
    printf("\n");
}

int main(){
    int arr[]={38, 27, 43, 3, 9, 82, 10};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergesort(arr,0,arr_size-1);

    printf("Sorted array is \n");
    printArray(arr, arr_size);

    return 0;
}

