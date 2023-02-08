#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int front, rear;
    vector<int> q;

public:
    Queue()
    {
        front = rear = -1;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
    void enqueue(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        q.push_back(x);
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Empty. Cannot remove";
        }
        else
        {
            ++front;
        }
    }
    void peek()
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue a;
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.peek();
    a.dequeue();
    a.peek();
}