#include<stdio.h>
int main(){
	int n;
	printf("Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	scanf("%d",&arr[i]);
	printf("Printing the array before sorting: ");
	for(int i=0; i<n; i++){
		printf("%d",arr[i]);
	}
	for(int i=0; i<n-1;i++){
		int check=arr[i];
		int mini=i;
		for(int j=i+1; j<n; j++){
		if(arr[j]<check){
			check=arr[j];
			mini=j;
		}
	}
	int temp=arr[i];
	arr[i]=arr[mini];
	arr[mini]=temp;
}
printf("\nPrinting after sorting: ");
for(int i=0; i<n; i++){
	printf("%d", arr[i]);
}
}
