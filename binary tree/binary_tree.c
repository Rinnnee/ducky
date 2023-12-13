#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

void inOrderTraversal(Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    Node* root = NULL;
    int n, num;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the data for each node:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        root = insert(root, num);
    }
    printf("In-order traversal of the tree: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Pre-order traversal of the tree: ");
    preOrderTraversal(root);
    printf("\n");

    printf("Post-order traversal of the tree: ");
    postOrderTraversal(root);
    printf("\n");

    return 0;
}
