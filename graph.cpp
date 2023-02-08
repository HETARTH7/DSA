#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> v[], int s, int d)
{
    v[s].push_back(d);
    v[d].push_back(s);
}

void printGraph(vector<int> v[], int n)
{
    for (int d = 0; d < n; ++d)
    {
        cout << "\n Vertex "
             << d << ":";
        for (int x : v[d])
            cout << "-> " << x;
        cout << "\n";
    }
}

void BFS(vector<int> v[], int s, int n)
{
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (q.empty() == false)
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (int y : v[x])
        {
            if (visited[y] == false)
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

void dfs(vector<int> v[], int s, bool visited[])
{
    cout << s << " ";
    int x = s;
    visited[s] = true;
    for (int i : v[s])
    {
        if (visited[i] == false)
        {
            dfs(v, i, visited);
        }
    }
}

void DFS(vector<int> v[], int s, int n)
{
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    dfs(v, s, visited);
}

int main()
{
    int n = 5;
    vector<int> v[n];
    addEdge(v, 0, 1);
    addEdge(v, 0, 2);
    addEdge(v, 1, 2);
    addEdge(v, 1, 3);
    addEdge(v, 2, 3);
    addEdge(v, 2, 4);
    addEdge(v, 3, 4);
    DFS(v, 0, n);
}