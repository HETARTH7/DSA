#include <bits/stdc++.h>
#define n 5
using namespace std;

class CQueue
{
private:
    int front, rear, arr[n];

public:
    CQueue()
    {
        front = rear = -1;
    }
    void enqueue(int x)
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n;
        }
        arr[rear] = x;
    }
    void dequeue()
    {
        front = (front + 1) % n;
    }
    void view()
    {
        int i;
        for (i = front; i != rear; i = (i + 1) % n)
            cout << arr[i] << " ";
        cout << arr[i] << endl;
    }
};
int main()
{
    CQueue cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cq.enqueue(5);
    cq.view();
    cq.dequeue();
    cq.view();
}