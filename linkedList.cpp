#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return 0;
}
Node *insertAtBeginning(int x, Node *head)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
Node *insertAt(int x, int p, Node *head)
{
    Node *temp = new Node(x);
    for (int i = 0; i < p - 2; i++)
    {
        head = head->next;
    }
    temp->next = head->next;
    head->next = temp;
    return 0;
}
Node *insertAtEnd(int x, Node *head)
{
    Node *temp = new Node(x);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = temp;
    return 0;
}
Node *deleteAtBeginning(Node *head)
{
    Node *temp = head->next;
    delete (head);
    return temp;
}
Node *deleteAtEnd(Node *head)
{
    while (head->next->next != NULL)
    {
        head = head->next;
    }
    delete (head->next);
    head->next = NULL;
    return 0;
}
int main()
{
    Node *head = NULL;
    head = insertAtBeginning(60, head);
    head = insertAtBeginning(50, head);
    head = insertAtBeginning(40, head);
    head = insertAtBeginning(30, head);
    head = insertAtBeginning(20, head);
    head = insertAtBeginning(10, head);
    traverse(head);
    insertAt(35, 4, head);
    traverse(head);
    insertAtEnd(70, head);
    insertAtEnd(80, head);
    traverse(head);
    head = deleteAtBeginning(head);
    traverse(head);
    deleteAtEnd(head);
    traverse(head);
}