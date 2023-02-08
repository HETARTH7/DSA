#include <bits/stdc++.h>
using namespace std;

void Search(string txt, string pat)
{
    int m = txt.length();
    int n = pat.length();
    for (int i = 0; i < m - n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
        }
        if (j == n)
        {
            cout << i;
        }
    }
}
int main()
{
    string txt = "abababbbaa";
    string pat = "ab";
    Search(txt, pat);
}