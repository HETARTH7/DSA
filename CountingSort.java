import java.util.Arrays;

public class CountingSort {

    public static int[] countingSort(int arr[]) {
        int maxVal = -1;
        for (int i : arr)
            maxVal = Math.max(i, maxVal);
        int freq[] = new int[maxVal + 1];
        for (int i : arr)
            freq[i]++;
        int cumSum[] = new int[maxVal + 1];
        for (int i = 1; i <= maxVal; i++) {
            cumSum[i] += cumSum[i - 1] + freq[i];
        }
        int res[] = new int[arr.length];
        for (int i : arr) {
            int idx = cumSum[i] - freq[i];
            freq[i]--;
            res[idx] = i;
        }
        return res;
    }

    public static void main(String args[]) {

        int[] data = { 4, 3, 12, 1, 5, 5, 3, 9 };
        System.out.println("Sorted Array in Ascending Order:");
        System.out.println(Arrays.toString(countingSort(data)));
    }
}
