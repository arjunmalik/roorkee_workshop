#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int key;
    struct Node* left, *right;
};

struct Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
};

void inorder(struct Node* temp)
{
    if (!temp)
        return;

    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
}

void levelOrderTraversal(struct Node* temp)
{
  queue<struct Node*> q;
  q.push(temp);
  while(!q.empty()){
    struct Node* t = q.front();
    q.pop();
    cout<<t->key<<" \n";
    if(t->left!=NULL)
      q.push(t->left);
    if(t->right!=NULL)
      q.push(t->right);
  }
}

void insert(struct Node* temp, int key)
{
    queue<struct Node*> q;
    q.push(temp);
    while(!q.empty()){
      struct Node* t = q.front();
      q.pop();
      if(t->left == NULL){
        t->left = newNode(key);
        return;
      }
      else
      {
        q.push(t->left);
      }
      if(t->right == NULL){
        t->right = newNode(key);
        return;
      }
      else
      {
        q.push(t->right);
      }
    }
}

int main()
{
    struct Node* root = newNode(10);
    root->left = newNode(11);
    root->left->left = newNode(7);
    root->right = newNode(9);
    root->right->left = newNode(15);
    root->right->right = newNode(8);

    cout << "Inorder traversal before insertion:";
    inorder(root);
    cout<<"\n";
    levelOrderTraversal(root);

    int key = 12;
    insert(root, key);

    cout << endl;
    cout << "Inorder traversal after insertion:";
    inorder(root);
    cout<<"\n";
    levelOrderTraversal(root);

    return 0;
}
