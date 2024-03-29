// Program to evaluate post-fix expression using stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int stack[MAX];
int top = -1;

char expression[10] = "231*+9-";

void push(int element){
    if(top == MAX - 1){
        printf("Overflow");
    }else{
        stack[++top] = element;
    }
}

int pop(){
    if(top == -1){
        return -1;
    }else{
        return stack[top--];
    }
}

int isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    
    return 0;
}

int evaluate(int a, int b, char op){
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return b - a;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return b / a;
        break;
    
    default:
        break;
    }
}

int main(){
    int a, b, result;
    int i = 0;

    while(expression[i] != '\0'){
        if(!isOperator(expression[i])){
            push(expression[i] - 48);
        }else{
            a = pop();
            b = pop();
            push(evaluate(a, b,expression[i] ));
        }
        i++;
    }

    printf("Result : %d", pop());
}