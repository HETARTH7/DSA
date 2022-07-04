#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
        cout << x << " Added to the stack" << endl;
    }
    void pop()
    {
        if (v.empty())
        {
            cout << "Underflow";
        }
        else
        {
            int res = v.back();
            cout << res << " Removed from the stack";
        }
    }
    void peek()
    {
        if (v.empty())
        {
            cout << "Empty Stack";
        }
        else
        {
            cout << v.back();
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