//Write a c program to insert a value using push operation and eliminate a value using pop operation.
#include <stdio.h>
#include <stdlib.h>
#define size 5
int arr[size];
int top=-1;
void push(){
    int n;
    if(top>5)
        printf("Overflow!");
    else{
        printf("Enter the number to be entered in the stack:");
        scanf("%d",&n);
        top++;
        arr[top]=n;
        printf("%d is inserted in the stack.\n",n);
    }
}
void pop(){
    if(top==-1)
        printf("Underflow!");
    else{
        printf("%d is deleted from the stack.\n",arr[top]);
        top--;
    }
}
void show(){
    printf("The stack is:\n");
    for (int i = top; i >=0 ; i--) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    while (2){
        int ch;
        printf("1. Push\n2. Pop\n3. Show\n4. End\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("END!");
                exit(0);
                break;
            default:
                printf("ERROR!");
        }
    }
}
