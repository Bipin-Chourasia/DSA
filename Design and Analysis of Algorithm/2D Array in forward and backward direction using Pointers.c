#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("Enter number of rows: ");
	scanf("%d",&r);
	printf("Enter number of cols: ");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter elements: \n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Row %d, column %d: ",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Array in forward direction: \n");
	for(i=0; i<r; i++){
		int *p=arr[i];
		for( j=0; j<c; j++){
			printf("%d ",*(p+j));
		}
		printf("\n");
	}
	printf("Array in reverse direction: \n");
	for(i=r-1; i>=0; i--){
		int *p=arr[i];
		for( j=c-1; j>=0; j--){
			printf("%d",*(p+j));
		}
		printf("\n");
	}		
}
