import java.util.Arrays;
import java.util.Comparator;

public class FractionalKnapsack {
    public static double fractionalKnapsack(int W, int arr[][]) {
        double res = 0;
        Arrays.sort(arr, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return b[0] / b[1] - a[0] / a[1];
            }
        });
        for (int item[] : arr) {
            if (W - item[1] < 0) {
                res += (item[0] * ((double) W / item[1]));
                break;
            }
            W -= item[1];
            res += item[0];
        }
        return res;
    }

    public static void main(String[] args) {
        int W = 50;
        int arr[][] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
        double maxVal = fractionalKnapsack(W, arr);
        System.out.println("Maximum value we can obtain = " + maxVal);
    }
}
