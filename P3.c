/* Write a C program to find the smallest element of array.
Algorithm:-
(1) Start.
(2) Input from user the value of n.
(3) Array declaration of n size.
(4) Input elements.
(5) Initialize smallest element as arr[].
(6) Find the smallest element by checking for each index i from 1 to n-1 if arr[i] is greater than smallest, update smallest to arr[i].
(7) Print the value of the variable smallest as output.
(8) End.

Source code:-*/

#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter elements in the index %d:",i);
		scanf("%d",&arr[i]);
	}
	int smallest=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	printf("The smallest element in the array is:%d",smallest);
}

/*Enter the number of elements in the array:5
Enter elements in the index 0:100
Enter elements in the index 1:505
Enter elements in the index 2:200
Enter elements in the index 3:410
Enter elements in the index 4:800
The smallest element in the array is:100*/


