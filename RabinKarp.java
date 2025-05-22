public class RabinKarp {
    public final static int d = 256;

    public static void rabinKarp(String pat, String txt, int q) {
        int m = pat.length(), n = txt.length();
        int p = 0, t = 0;
        int h = 1;
        for (int i = 0; i < m - 1; i++)
            h = (h * d) % q;

        for (int i = 0; i < m; i++) {
            p = (p * d + pat.charAt(i)) % q;
            t = (t * d + txt.charAt(i)) % q;
        }

        for (int i = 0; i <= n - m; i++) {
            if (p == t) {
                int j;
                for (j = 0; j < m; j++) {
                    if (pat.charAt(j) != txt.charAt(i + j))
                        break;
                }
                if (j == m)
                    System.out.println("Pattern found at: " + i);
            }
            if (i < n - m) {
                t = (d * (t - h * txt.charAt(i)) + txt.charAt(i + m)) % q;
                if (t < 0)
                    t = (t + q);
            }
        }
    }

    public static void main(String[] args) {
        String txt = "GEEKS FOR GEEKS";
        String pat = "GEEK";
        int q = 101;
        rabinKarp(pat, txt, q);
    }
}
