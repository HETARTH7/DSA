def constructLPS(pat, lps):
    len_, i, m = 0, 1, len(pat)

    while i < m:
        if pat[i] == pat[len_]:
            len_ += 1
            lps[i] = len_
            i += 1
        else:
            if len_ != 0:
                len_ = lps[len_-1]
            else:
                lps[i] = 0
                i += 1


def kmp(pat, txt, lps):
    i, j, m, n = 0, 0, len(txt), len(pat)

    while i < m:
        if txt[i] == pat[j]:
            i += 1
            j += 1
            if j == n:
                print("Pattern found at "+str(i-n))
                j = lps[j-1]
        else:
            if j == 0:
                i += 1
            else:
                j = lps[j-1]


txt = "aabaacaadaabaaba"
pat = "aaba"
lps = [0]*len(pat)
constructLPS(pat, lps)

kmp(pat, txt, lps)


# Time Complexity: O(m+n)  (m->len(pat),n->len(txt))
# Space Complexity: O(m)
