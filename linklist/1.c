#include<stdio.h>
#include<stdlib.h>

// declare global variables 
typedef struct nd { 
    char c; 
    struct nd *next; 
} node; 
node *head = NULL; 
node *tail = NULL;
int count = 0;

// function for appending new node at the front of a list
void append_front(char ch) { 
    node *n = malloc(sizeof(node)); 
    if(head == NULL) { 
        head = n; 
        tail = n; 
        n->next = NULL; } 
    else { 
        n->next = head; 
        head = n; } 
        n->c = ch; 
    count++;
}

void printList() {
    node *temp = head;
    while (temp != NULL) {
        printf("%c ", temp->c);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    append_front('c');
    printList();
    append_front('b');
    printList();
    append_front('a');
    printList();
    return(0);
}