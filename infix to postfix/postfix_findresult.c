#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAX 100

typedef struct Stack{
    int top;
    int elements[MAX];
}Stack;

void push(Stack *s, int x){
    if(s->top == MAX - 1){
        printf("Stack Overflow\n");
        exit(1);
    }
    s->top++;
    s->elements[s->top] = x;
}

int pop(Stack *s){
    if(s->top == -1){
        printf("Stack Underflow\n");
        exit(1);
    }
    int x = s->elements[s->top];
    s->top--;
    return x;
}


int performOperation(char op, int x, int y){
    switch(op){
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/': return x / y;
    case '^': return x ^ y;
    default: return -1;
    }
}

int evaluatePostfix(char postfix[]){
    Stack s;
    s.top = -1;
    for(int i=0; postfix[i]; i++){
        if(isdigit(postfix[i])){
            int x = postfix[i] - '0';
            push(&s, x);
        }
        else{
            int y = pop(&s);
            int x = pop(&s);
            int result = performOperation(postfix[i], x, y);
            push(&s, result);
        }
    }
    return pop(&s);
}

void main(){
    char postfix[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);
}