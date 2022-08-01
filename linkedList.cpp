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
Node *insertAtTheBeginning(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
int main()
{
    Node *head = NULL;
    head = insertAtTheBeginning(head, 10);
    head = insertAtTheBeginning(head, 20);
    head = insertAtTheBeginning(head, 30);
    Traverse(head);
}