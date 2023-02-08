#include <bits/stdc++.h>
#define n 5
using namespace std;

class Dequeue
{
    int front, rear, arr[n];

public:
    Dequeue()
    {
        front = rear = -1;
    }
    void insertFront(int x)
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            if (front == 0)
            {
                front = n - 1;
            }
            else
            {
                front--;
            }
        }
        arr[front] = x;
    }
    void insertRear(int x)
    {
        arr[++rear] = x;
    }
    void deleteFront()
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            if (front == n - 1)
            {
                front = 0;
            }
            else
            {
                front++;
            }
        }
    }
    void deleteRear()
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            if (rear == 0)
            {
                rear = n - 1;
            }
            else
            {
                rear--;
            }
        }
    }
};
int main()
{
    Dequeue dq;
}