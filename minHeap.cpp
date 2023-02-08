#include <bits/stdc++.h>
using namespace std;

void swapI(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int left(int x)
{
    return 2 * x + 1;
}

int right(int x)
{
    return 2 * x + 2;
}

int parent(int x)
{
    return (x - 1) / 2;
}

void insert(vector<int> &v, int x)
{
    v.push_back(x);
    for (int i = v.size() - 1; i != 0; i--)
    {
        if (v[parent(i)] > v[i])
        {
            swapI(v[i], v[parent(i)]);
        }
    }
}

void heapify(vector<int> &v, int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (v[i] > v[l])
    {
        smallest = l;
    }
    if (v[i] > v[r])
    {
        smallest = r;
    }
    if (smallest != i)
    {
        swap(v[smallest], v[i]);
        heapify(v, smallest);
    }
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void extractMin(vector<int> v)
{
    swapI(v[0], v[v.size()]);
    v.pop_back();
    heapify(v, 0);
}

void deleteNode(vector<int> &v, int x)
{
    int size = v.size();
    int i;
    for (i = 0; i < size; i++)
    {
        if (x == v[i])
            break;
    }
    swapI(v[i], v[size - 1]);

    v.pop_back();
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(v, i);
    }
}
int main()
{
}