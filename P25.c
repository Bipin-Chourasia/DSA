//Write a program in C to convert infix to prefix without using stack.
#include<stdio.h>
#include<string.h>
int isOperator(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
int precedence(char c){
    if (c=='+'||c=='-'){
        return 1;
    }
    else if (c=='*'||c=='/'){
        return 2;
    }
    else if(c=='^'){
        return 3;
    }
    return 0;
}
void infixToPrefix(char infix[],char prefix[],int start,int end){
    if (start > end){
        return;
    }
    int minPrecedence=3;
    int operatorIndex=-1;
    for (int i=start;i<=end;i++){
        if (isOperator(infix[i])&&precedence(infix[i])<=minPrecedence){
            minPrecedence=precedence(infix[i]);
            operatorIndex=i;
        }
    }
    if (operatorIndex==-1){
        strncat(prefix, &infix[start], 1);
        return;
    }
    strncat(prefix, &infix[operatorIndex], 1);
    infixToPrefix(infix, prefix, start, operatorIndex - 1);
    infixToPrefix(infix, prefix, operatorIndex + 1, end);
}
int main(){
    char infix[100],prefix[100]="";
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    int length=strlen(infix);
    infixToPrefix(infix, prefix, 0, length - 1);
    printf("Prefix expression: %s\n", prefix);
}
