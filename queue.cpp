#include <bits/stdc++.h>
using namespace std;

struct Queue
{
public:
    int size, front, rear, cap;
    int *arr;

    Queue(int c)
    {
        front = rear = -1;
        size = 0;
        cap = c;
        arr = new int[cap];
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            cout << "Empty Queue\n";
        }
        return (front == -1);
    }

    bool isFull()
    {
        if (size == cap)
        {
            cout << "Queue Full\n";
        }
        return (size == cap);
    }

    void enque(int x)
    {
        if (front == -1)
        {
            front = 0;
        }
        else if (size == cap)
        {
            cout << "Queue Full\n";
        }
        rear++;
        arr[rear] = x;
        cout << x << " Inserted\n";
    }
    void dequeue()
    {
        if (front = -1)
        {
            cout << "Queue Empty\n";
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        cout << "Deleted Item\n";
    }
    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Queue q(5);
    q.isEmpty();
    q.enque(5);
    q.enque(10);
    q.enque(15);
    q.enque(20);
    q.enque(25);
    q.display();
    q.isFull();
    q.dequeue();
}