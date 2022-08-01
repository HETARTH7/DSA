#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void Traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
};
Node *insertBeginning(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}
Node *delHead(Node *head)
{
    if (head = NULL)
    {
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}
int main()
{
    Node *head = NULL;
    head = insertBeginning(head, 30);
    head = insertBeginning(head, 20);
    head = insertBeginning(head, 10);
    Traverse(head);
    cout << endl;
    head = insertEnd(head, 40);
    Traverse(head);
    cout << endl;
    head = delHead(head);
    Traverse(head);
}