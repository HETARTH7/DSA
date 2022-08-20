#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int v, int u)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    int v;
    vector<int> adj[v];
}