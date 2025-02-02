#include<stdio.h>
int main(){
	int n,i;
	int arr[n];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray in forward direction: ");
	int *p=arr;
	for(i=0; i<n; i++){
		printf("%d",*(p+i));
	}
	printf("\nArray in backward direction: ");
	for(i=n-1; i>=0;i--){
		printf("%d", *(p+i));
	}
	return 0;
}
