#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->key<<" ";
        inOrder(root->right);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    inOrder(root);
}