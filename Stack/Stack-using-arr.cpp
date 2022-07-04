#include <bits/stdc++.h>
using namespace std;
#define MAX 100
struct Stack
{
    int arr[MAX];
    int top;

    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top >= MAX - 1)
        {
            cout << "Overflow Error" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
            cout << x << " Added to the stack" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow";
        }
        else
        {
            int res = arr[top];
            top--;
            cout << res << " Removed from the stack";
        }
    }
    void peek()
    {
        if (top == -1)
        {
            cout << "Empty Stack";
        }
        else
        {
            cout << arr[top];
        }
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.peek();
    s.pop();
    s.peek();
}