#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    int data;
    struct Node* left, *right;
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)
                        malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return(node);
}

int findMax(struct Node* root)
{
    // Base case
    if (root == NULL)
      return INT_MIN;

    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
      res = lres;
    if (rres > res)
      res = rres;
    return res;
}

int main(void)
{
    struct Node*NewRoot=NULL;
    struct Node *root = newNode(2);
    root->left        = newNode(7);
    root->right       = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left=newNode(1);
    root->left->right->right=newNode(11);
    root->right->right=newNode(9);
    root->right->right->left=newNode(4);

    printf ("Maximum element is %d \n", findMax(root));

    return 0;
}
