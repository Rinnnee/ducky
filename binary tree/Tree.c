#include <stdio.h>
#include <stdlib.h>

typedef struct nd{
    struct nd *left;
    int num;
    struct nd *right;
}node;

node* newNode(int num) {
    node* n =(node*)malloc(sizeof(n));
    n->num = num;
    n->left = NULL;
    n->right = NULL;
    return n;
}

node* insert(node* n, int num) {
    if (n == NULL) {
        return newNode(num);
    }
    if (num < n->num) {
        n->left = insert(n->left, num);
    } else if (num > n->num) {
        n->right = insert(n->right, num);
    }
    return n;
}

void preOrder(node* n) {
    if (n == NULL) {
        return;
    }
    printf("%d ", n->num);
    preOrder(n->left);
    preOrder(n->right);
}

void inOrder(node* n) {
    if (n == NULL) {
        return;
    }
    inOrder(n->left);
    printf("%d ", n->num);
    inOrder(n->right);
}

void postOrder(node* n) {
    if (n == NULL) {
        return;
    }
    postOrder(n->left);
    postOrder(n->right);
    printf("%d ", n->num);
}

int main() {
    node* root = NULL;
    int np, number;

    printf("Enter the number of nodes: ");
    scanf("%d", &np);

    printf("Enter %d integers:\n", np);
    for (int i = 0; i < np; i++) {
        scanf("%d", &number);
        root = insert(root, number);
    }

    printf("\nPreorder: ");
    preOrder(root);
    printf("\n");

    printf("\nInorder: ");
    inOrder(root);
    printf("\n");

    printf("\nPostorder: ");
    postOrder(root);
    printf("\n");

    return 0;
}