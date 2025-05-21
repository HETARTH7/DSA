import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.PriorityQueue;

public class JobSequencing {
    static class Job {
        char id;
        int dead;
        int profit;

        Job(char id, int dead, int profit) {
            this.id = id;
            this.dead = dead;
            this.profit = profit;
        }
    };

    static int[] jobSequencing(int[] deadline, int[] profit) {
        List<int[]> jobs = new ArrayList<>();
        for (int i = 0; i < deadline.length; i++) {
            jobs.add(new int[] { deadline[i], profit[i] });
        }
        jobs.sort(Comparator.comparingInt(a -> a[0]));
        PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
        for (int job[] : jobs) {
            pq.add(job[1]);
            if (job[0] <= (pq.size() - 1)) {
                pq.poll();
            }
        }
        int[] res = new int[2];
        int cnt = 0, maxP = 0;
        while (!pq.isEmpty()) {
            cnt++;
            maxP += pq.poll();
        }
        res[0] = cnt;
        res[1] = maxP;
        return res;
    }

    public static void main(String args[]) {
        int[] deadline = { 2, 1, 2, 1, 1 };
        int[] profit = { 100, 19, 27, 25, 15 };
        int[] result = jobSequencing(deadline, profit);
        System.out.println(result[0] + " " + result[1]);
    }
}
