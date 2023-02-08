#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int x)
    {
        data = x;
        right = left = NULL;
    }
    void inOrder(Node *root)
    {
        if (root != NULL)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }
    void preOrder(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    void postOrder(Node *root)
    {
        if (root != NULL)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }
};
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    cout << "Inorder: ";
    root->inOrder(root);
    cout << endl
         << "Preorder: ";
    root->preOrder(root);
    cout << endl
         << "Postorder: ";
    root->postOrder(root);
}