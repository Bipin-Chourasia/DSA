//Write a c program to delete one element from the array.
#include <stdio.h>
int main()
{
    int n,pos,element,found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element of the array in index %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of the element to be deleted:");
    scanf("%d", &element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found = 1;
            pos = i;
            break;
        }
    }
    if (found == 1)
    {
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("The array after deleting the element is: \n");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
        printf("Element %d is not found in the array", element);
}
