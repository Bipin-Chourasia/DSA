// Write a C program to find the sum of the elements of the array.

/*Algorithm
(1) Start
(2) Input from user the value of n.
(3) Array declaration of n size.
(4) Input elements.
(5) Calculate sum by initializing tha variable sum to 0 and for each index i from 0 to n-1, add the value of arr[i] to sum.
(6) Print the sum as output.

Source code:-*/

#include<stdio.h>
int main(){
	int n;
	int sum=0;
	printf("The size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter element in the index %d:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("The sum of the elements in the array is:%d", sum);
}
/*
Output:-

The size of the array:3
Enter element in the index 0:1
Enter element in the index 1:2
Enter element in the index 2:3
The sum of the elements in the array is:6
*/
