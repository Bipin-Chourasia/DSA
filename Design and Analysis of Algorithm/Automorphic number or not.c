#include<stdio.h>
int Automorp(int n){
	int sq=n*n;
	int temp=n;
	while(temp>0){
		if(sq%10!=temp%10){
			return 0;
		}
		sq=sq/10;
		temp=temp/10;
	}
	return 1;
}
int main(){
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	if(Automorp(n)){
	printf("%d is an Automorphic!",n);
	}
}
