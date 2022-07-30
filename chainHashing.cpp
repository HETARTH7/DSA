#include <bits/stdc++.h>
using namespace std;

class myHash
{
private:
    int n;
    vector<vector<int>> v;

public:
    myHash(int n)
    {
        v = vector<vector<int>>(n);
        this->n = n;
    }
    int Hash(int x)
    {
        return x % n;
    }
    void insert(int x)
    {
        int index = Hash(x);
        v[index].push_back(x);
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
    void displayHash()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << i;
            for (int j = 0; j < v[i].size(); j++)
                cout << " -> " << v[i][j];
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
    s.displayHash();
    cout << "After deleting some item\n";
    s.remove(12);
    s.displayHash();
}