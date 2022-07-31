#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
    one = new Node();
    two = new Node();
    three = new Node();
    one->data = 1;
    two->data = 2;
    three->data = 3;
    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}