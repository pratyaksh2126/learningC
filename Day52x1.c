#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
int max(int a, int b) {
    return (a > b) ? a : b;
}
int height(struct Node* root) {
    if (root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}
struct Node* createNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    printf("Height of tree: %d\n", height(root));
    return 0;
}
