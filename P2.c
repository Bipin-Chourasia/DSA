/* Write a C prigram to find the largest number of an array.

Algorithm:-

(1) Start
(2) Input from user the value of n.
(3) Array declaration of n size.
(4) Input elements.
(5) Initialize largest element as arr[0].

Source code:-
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements in the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n;i++)
	{
		printf("Print elements in index %d:",i);
		scanf("%d",&arr[i]);
	}
	int largest=arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	printf("The largest element in the array is: %d",largest);
}
/*Enter number of elements in the array:4
Print elements in index 0:50
Print elements in index 1:30
Print elements in index 2:20
Print elements in index 3:45
The largest element in the array is: 50
*/

