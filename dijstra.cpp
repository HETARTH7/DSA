#include <bits/stdc++.h>
using namespace std;

void Prism(vector<vector<int>> graph, int v)
{
    bool mSet[v];
    int key[v];
    for (int i = 0; i < v; i++)
    {
        mSet[i] = false;
        key[i] = INT_MAX;
    }
    key[0] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        int u = -1;
        for (int j = 0; j < v; j++)
        {
            if (!mSet[j] && (u == -1 || key[j] < key[u]))
            {
                u = j;
            }
        }
        mSet[u] = true;
        for (int j = 0; j < v; j++)
        {
            if (graph[u][j] != 0 && !mSet[j])
            {
                key[j] = min(key[j], key[u] + graph[u][j]);
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << key[i] << " ";
    }
}
int main()
{
    vector<vector<int>> graph = {{0, 9, 75, 0, 0},
                                 {9, 0, 95, 19, 42},
                                 {75, 95, 0, 51, 66},
                                 {0, 19, 51, 0, 31},
                                 {0, 42, 66, 31, 0}};
    Prism(graph, 5);
}