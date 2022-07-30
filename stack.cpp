#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    vector<int> v;

public:
    Stack()
    {
        top = -1;
    }
    void isEmpty()
    {
        if (top < 0)
        {
            cout << "Empty\n";
        }
        else
        {
            cout << "Not Empty\n";
        }
    }
    void push(int x)
    {
        v.push_back(x);
        top++;
    }
    void pop()
    {
        v.pop_back();
    }
    void peek()
    {
        cout << v[top] << endl;
    }
    void print()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
    }
};
int main()
{
    Stack s;
    s.isEmpty();
    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.print();
    s.pop();
    s.print();
}
