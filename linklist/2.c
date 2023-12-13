#include<stdio.h>
#include<stdlib.h>
// declare global variables
typedef struct nd{
    int c;
    struct nd *next;
}node;
node *head = NULL;
node *tail = NULL;
int count = 0;

// function for appending new node behind head node of a list
void append_behindHead(int ch){
    node *n = malloc(sizeof(node));

    //in case an old list is empty
    if(head == NULL){
        head = n;
        tail = n;
        n->next = NULL;
    }
    
    //in case an old list has only 1 node
    else if (head == tail){
        n->next = head->next ; // will set n->next = NULL
        head->next = n;
        // สองบรรทัดข้างบนนี้สลับที่กันไม่ได้นะ ถ้าสลับผลลัพธ์จะต่างกัน ลองวาดรูปดู
        tail = n;
    }
    
    //in case an old list has >= 2 nodes
    else{
        n->next = head->next ;
        head->next = n; 
    }
    // สองบรรทัดข้างบนนี้สลับที่กันไม่ได้นะ ถ้าสลับผลลัพธ์จะต่างกัน ลองวาดรูปดู
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
    append_behindHead(3);
    printList();
    append_behindHead(2);
    printList();
    append_behindHead(1);
    printList();
    append_behindHead(4);
    printList();
    return(0);
}