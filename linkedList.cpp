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
    Node *temp = head->next;
    delete head;
    return temp;
}
Node *delTail(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

Node *insertPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for (int i = 1; i <= pos - 2; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int Search(Node *head, int x)
{
    Node *curr = head;
    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
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
    cout << endl;
    head = delTail(head);
    Traverse(head);
    cout << endl;
    head = insertPos(head, 2, 5);
    Traverse(head);
    cout << endl;
    int pos = Search(head, 5);
    if (pos == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found at " << pos;
    }
}