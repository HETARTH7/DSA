import java.util.Arrays;
import java.util.Comparator;

public class ActivitySelectionProblem {
    public static void activitySelection(int s[], int f[], int n) {
        int activities[][] = new int[n][2];
        for (int i = 0; i < n; i++) {
            activities[i][0] = f[i];
            activities[i][1] = s[i];
        }
        Arrays.sort(activities, new Comparator<int[]>() {
            public int compare(int a[], int b[]) {
                return a[0] - b[0];
            }
        });
        int prevFinish = -1, res = 0;
        for (int activity[] : activities) {
            if (activity[1] > prevFinish) {
                res++;
                prevFinish = activity[0];
                System.out.println("Activity started at " + activity[1] + " and ended at " + activity[0]);
            }
        }
        System.out.println("Max Number of activities: " + res);
    }

    public static void main(String[] args) {
        int s[] = { 1, 3, 0, 5, 8, 5 };
        int f[] = { 2, 4, 6, 7, 9, 9 };
        int n = s.length;

        activitySelection(s, f, n);
    }
}
