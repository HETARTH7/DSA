#include <bits/stdc++.h>
using namespace std;

struct Deque
{
    int cap, size, *arr;
    Deque(int c)
    {
        size = 0;
        cap = c;
        arr = new int[cap];
    }
    bool isFull()
    {
        if (size == cap)
        {
            cout << "Full";
        }
        return (size == cap);
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            cout << "Empty";
        }
        return (size == 0);
    }
    void insertRear(int x)
    {
        if (isFull())
        {
            cout << "Full";
        }
        arr[size] = x;
        size++;
    }
    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "Empty";
        }
        size--;
    }
    void getRear()
    {
        cout << size - 1;
    }
    void insertFront(int x)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i - 1] = arr[i];
        }
        arr[0] = x;
        size++;
    }
    void deleteFront()
    {
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
};
int main()
{
    // operations
}