def rabinKarp(pat, txt):
    m, n = len(pat), len(txt)
    p, t = 0, 0
    h = (d**(m-1)) % q
    for i in range(m):
        p = (p*d+ord(pat[i])) % q
        t = (t*d+ord(txt[i])) % q
    for i in range(n-m+1):
        if p == t:
            for j in range(m):
                if txt[i+j] != pat[j]:
                    break
            if j == m-1:
                print("Pattern found at "+str(i))
        if i < n-m:
            t = (d*(t-ord(txt[i])*h)+ord(txt[i+m])) % q


txt = "abcaadfiabc"
pat = "abc"

d = 10
q = 101
rabinKarp(pat, txt)


# Time Complexity: O(n+m)
# Space Complexity: O(1)
