#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    vector<int> s;

    Stack()
    {
        top = -1;
    }
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
        }
        cout << "No";
    }
    void push(int x)
    {
        top++;
        s.push_back(x);
    }

    void pop()
    {
        s.pop_back();
        top--;
    }

    void viewtop()
    {
        cout << "Top of the stack: " << s[top] << endl;
    }
    void traverse()
    {
        cout << "Stack: ";
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack arr;
    arr.traverse();
    arr.push(1);
    arr.push(2);
    arr.push(3);
    arr.push(4);
    arr.traverse();
    arr.viewtop();
    arr.pop();
    arr.pop();
    arr.viewtop();
    arr.traverse();
}