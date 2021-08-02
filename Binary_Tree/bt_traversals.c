#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* create();
void preOrder(struct node* root);
void inOrder(struct node* root);
void postOrder(struct node* root);

int main(void)
{
    struct node *root;
    root = NULL;
    root = create();
    printf("PreOrder for given tree: ");
    preOrder(root);
    printf("\nInorder for given tree: ");
    inOrder(root);
    printf("\nPostOrder for given tree: ");
    postOrder(root);
}

struct node* create()
{
    struct node *newNode;
    int x;
    newNode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    if(x == -1)
        return NULL;
    newNode-> data = x;
    printf("Left child of %d: ", x);
    newNode-> left = create();
    printf("Right child of %d: ", x);
    newNode-> right = create();
    return newNode;  
}

void preOrder(struct node* root)
{
    if(root == NULL)
        return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct node* root)
{   
    if(root == NULL)
        return;
    inOrder(root-> left);
    printf("%d ", root->data);
    inOrder(root-> right);
}

void postOrder(struct node* root)
{
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
