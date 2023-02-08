#include <bits/stdc++.h>
using namespace std;

class myHash
{
    int n;
    vector<vector<int>> v;

public:
    myHash(int size)
    {
        n = size;
        v = vector<vector<int>>(size);
    }
    int Hash(int x)
    {
        return x % n;
    }
    void insert(int x)
    {
        int i = Hash(x);
        v[i].push_back(x);
    }
    int search(int x)
    {
        int i = Hash(x);
        return i;
    }
    void remove(int x)
    {
        int index = Hash(x);
        for (int i = 0; i < v[index].size(); i++)
        {
            if (v[index][i] == x)
            {
                v[index].erase(v[index].begin() + i);
            }
        }
    }
    void display()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << i;
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << "-->" << v[i][j];
            }
            cout << endl;
        }
    }
};
int main()
{
    myHash s(5);
    s.insert(6);
    s.insert(23);
    s.insert(10);
    s.insert(12);
    s.insert(9);
    s.insert(11);
    s.insert(14);
    s.display();
    s.remove(14);
    cout << "After delete" << endl;
    s.display();
}