#include<stdio.h>
#include<stdlib.h>

// declare global variables
typedef struct nd {
    int c;
    struct nd *next;
}node;
node *head = NULL;
node *tail = NULL;
int count = 0;

// function for appending new node
void append_beforeTail(int ch) {
    node *n = malloc(sizeof(node));

    //in case an old list is empty
    if(head == NULL) {
        head = n;
        tail = n;
        tail->next = NULL;
    }

    //in case an old list has only 1 node
    else if (count == 1) { //หรือ อาจใช้ count == 1
        n->next = head;
        head = n;
    }

    //in case an old list has = 2 nodes
    else if (count == 2) {
        n->next = head->next;
        head->next = n;
    }

    //in case an old list has >= 3 nodes
    else {
        node *temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = tail;
    }
    n->c = ch;
    count++;
}

void printList() {
    node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->c);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    append_beforeTail(3);
    printList();
    append_beforeTail(2);
    printList();
    append_beforeTail(1);
    printList();
    append_beforeTail(4);
    printList();
    return(0);
}