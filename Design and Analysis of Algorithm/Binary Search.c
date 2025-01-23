#include<stdio.h>
int main(){
	int arr[10], num, n, pos=-1,beg, end, mid, found=0;
	printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for (int i=0;i<n;i++) {
         printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value: ");
    scanf("%d",&num);
    beg=0; end=n-1;
    while(beg<=end){
    	mid=(beg+end)/2;
    	if(arr[mid]==num){
    		printf("Elements found at %d ",mid);
    		found=1;
    		break;
		}else if(arr[mid]>num){
		end=mid-1;
		}else{
		beg=mid+1;
	}
	if(beg>end && found==0)
	printf("Element not found");
    }
	return 0;
}
