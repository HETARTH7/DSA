#include <bits/stdc++.h>
using namespace std;
#define d 10
void RabinKarp(string txt, string pat, int q)
{
    int m = pat.length();
    int n = txt.length();
    int h = 1;
    for (int i = 0; i < m; i++)
    {
        h = (h * d) % q;
    }
    int t = 0;
    int p = 0;
    for (int i = 0; i < m; i++)
    {
        t = (txt[i] + t * d) % q;
        p = (pat[i] + p * d) % q;
    }
    for (int i = 0; i <= (n - m); i++)
    {
        if (p == t)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
                if (txt[i + j] != pat[j])
                {
                    flag = false;
                    break;
                }
            if (flag == true)
                cout << i << " ";
        }
        if (i < n - m)
        {
            t = ((d * (t - txt[i] * h)) + txt[i + m]) % q;
            if (t < 0)
                t = t + q;
        }
    }
}
int main()
{
    string txt = "abababbbaa";
    string pat = "ab";
    int q = 12;
    RabinKarp(txt, pat, q);
}