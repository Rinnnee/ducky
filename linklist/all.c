#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

struct Node *head = NULL;

// เพิ่มต่อท้าย
void append(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// ลบโนดที่มีค่าที่ใส่
void delete(int value) {
    struct Node *temp = head, *prev;
    if (temp != NULL && temp->value == value) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->value != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

// หา
int search(int value) {
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->value == value) return 1;
        temp = temp->next;
    }
    return 0;
}


void printList() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    append(1);
    append(2);
    append(3);
    append(4);
    printList(); // output: 1 2 3 4
    append(5);
    printList(); // output: 1 2 3 4 5
    delete(3);
    printList(); // output: 1 2 4 5
    printf("Search for 3: %d\n", search(3)); // output: Search for 3: 0
}