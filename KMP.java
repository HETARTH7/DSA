public class KMP {
    public static void constructLPS(String pat, int m, int[] lps) {
        int len = 0, i = 1;
        lps[0] = 0;
        while (i < m) {
            if (pat.charAt(i) == pat.charAt(len)) {
                lps[i++] = ++len;
            } else {
                if (len == 0)
                    lps[i++] = 0;
                else
                    len = lps[len - 1];
            }
        }
    }

    public static void KMPSearch(String pat, String txt) {
        int m = pat.length(), n = txt.length();
        int[] lps = new int[m];
        constructLPS(pat, m, lps);
        int i = 0, j = 0;
        while (i < n) {
            if (txt.charAt(i) == pat.charAt(j)) {
                i++;
                j++;
                if (j == m) {
                    System.out.println("Pattern found at: " + (i - m));
                    j = lps[j - 1];
                }
            } else {
                if (j == 0) {
                    i++;
                } else {
                    j = lps[j - 1];
                }
            }
        }
    }

    public static void main(String args[]) {
        String txt = "aabaacaadaabaaba";
        String pat = "aaba";
        KMPSearch(pat, txt);
    }
}
