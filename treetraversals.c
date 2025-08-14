#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left, *right;
};
struct Node* newNode(int data) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = data; n->left = n->right = NULL;
    return n;
}
void inorder(struct Node* root) {
    if(root) { inorder(root->left); printf("%d ",root->data); inorder(root->right);}
}
void preorder(struct Node* root) {
    if(root) { printf("%d ",root->data); preorder(root->left); preorder(root->right);}
}
void postorder(struct Node* root) {
    if(root) { postorder(root->left); postorder(root->right); printf("%d ",root->data);}
}
int main() {
    struct Node *root = newNode(1);
    root->left = newNode(2); root->right = newNode(3);
    root->left->left = newNode(4); root->right->right = newNode(5);
    printf("Inorder: "); inorder(root); printf("\n");
    printf("Preorder: "); preorder(root); printf("\n");
    printf("Postorder: "); postorder(root); printf("\n");
    return 0;
}
