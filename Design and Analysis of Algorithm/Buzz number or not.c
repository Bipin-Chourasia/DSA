#include<stdio.h>
int main(){
	int n; 
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n%7==0 || n%10==7){
		printf("The following number is a buzz number.");
	}
	else{
		printf("The following number is not a buzz number.");
	}
}
