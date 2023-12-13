#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct nd{
    char c;
    struct nd *next;
}node;
node *top = NULL;

void push (char x){
    node *n = malloc(sizeof(node));
    n->next = top;
    top = n;
    n->c = x;
}

char pop(){
    char p;
    node *n;
    n = top;
    top = top->next;
    p = n->c;
    free(n);
    return p;
}

char stacktop(){
    if(top==NULL){
        return 0;
    }
    else{
        return top->c;
    }
}

int checkpr(char temp){
    int pr;
    if(temp=='^'){
        pr=3;
    }
    else if(temp=='*' || temp=='/'){
        pr=2;
    }
    else if(temp=='+' || temp=='-'){
        pr=1;
    }
    else{
        pr=0;
    }
    return pr;
}

void checkoper(char ck){
    if(stacktop()==0){
        push(ck);
    }
    else{
        if(ck == '('){
            push(ck);
        }
        else if(ck == ')'){
            while(stacktop() != '('){
                printf("%c",pop());
        }
        pop();
        }
        else{
            while(checkpr(ck)<=checkpr(stacktop()) && stacktop()!='('){
                printf("%c",pop());
            }
            push(ck);
        }
    }
}

void main(){
    char ch;
    while((ch=getchar())!='\n'){
        if(isdigit(ch) || isalpha(ch)){
            printf("%c",ch);
        }
        else{
            checkoper(ch);
        }
    }
    while(stacktop() != 0){
        printf("%c",pop());
    }
}