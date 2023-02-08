#include <bits/stdc++.h>
using namespace std;
#define d 10

void fillLPS(string pat, int lps[])
{
    int len = 0;
    int n = pat.length();
    lps[0] = 0;
    int i = 1;
    while (i < n)
    {
        if (pat[i] == pat[len])
        {
            lps[i] = ++len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                lps[i++] = 0;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}

void KMP(string txt, string pat)
{
    int n = txt.length();
    int m = pat.length();
    int lps[m];
    fillLPS(pat, lps);
    int i = 0, j = 0;
    while (i < n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            cout << (i - j);
            j = lps[j - 1];
        }
        else if (i < n && txt[i] != pat[j])
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }
}
int main()
{
    string txt = "abababbbaa";
    string pat = "abab";
    KMP(txt, pat);
}