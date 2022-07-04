#include <bits/stdc++.h>
using namespace std;
#define MAX 100
struct Queue
{
    int front, rear, arr[MAX];
    Queue()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(int x)
    {
        if (rear == MAX - 1)
        {
            cout << "Overflow Error\n";
        }
        else
        {
            front = 0;
            rear++;
            arr[rear] = x;
            cout << x << " Enqueued\n";
        }
    }
    void dequeue()
    {
        if (front == -1)
        {
            cout << "Underflow Error\n";
        }
        else if (front == rear)
        {
            int res = arr[front];
            front = -1;
            rear = -1;
            cout << res << " dequeued\n";
        }
        else
        {
            int res = arr[front];
            front++;
            cout << res << " dequeued\n";
        }
    }
    void getRear()
    {
        cout << arr[rear]<<endl;
    }
    void getFront()
    {
        cout << arr[front]<<endl;
    }
};

int main()
{
    Queue s;
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.dequeue();
    s.getFront();
    s.getRear();
}