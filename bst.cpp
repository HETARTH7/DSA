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
    void preOrder(Node *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    bool search(Node *root, int x)
    {
        if (root->data = NULL)
        {
            return false;
        }
        else
        {
            if (root->data == x)
            {
                return true;
            }
            if (root->data > x)
            {
                search(root->left, x);
            }
            if (root->data < x)
            {
                search(root->right, x);
            }
        }
    }

    Node *insert(Node *root, int x)
    {
        if (root == NULL)
            return new Node(x);
        if (root->data < x)
            root->right = insert(root->right, x);
        else if (root->data > x)
            root->left = insert(root->left, x);
        return root;
    }
    Node *inOrderSuccessor(Node *root)
    {
        root = root->right;
        while (root != NULL && root->left != NULL)
        {
            root = root->left;
        }
        return root;
    }
    Node *remove(Node *root, int x)
    {
        if (root == NULL)
        {
            return root;
        }
        else if (root->data > x)
        {
            remove(root->left, x);
        }
        else if (root->data < x)
        {
            remove(root->right, x);
        }
        else
        {
            if (root->left == NULL)
            {
                Node *curr = root->right;
                delete root;
                return curr;
            }
            else if (root->right == NULL)
            {
                Node *curr = root->left;
                delete root;
                return curr;
            }
            else
            {
                Node *curr = inOrderSuccessor(root);
                root->data = curr->data;
                root->right = remove(root->right, curr->data);
            }
        }
    }
};
int main()
{
}