import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;

public class ShortestPathUnweighted {
    private static int v = 8;
    private static ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(v);

    private static void addEdge(ArrayList<ArrayList<Integer>> adj, int i, int j) {
        adj.get(i).add(j);
        adj.get(j).add(i);
    }

    public static void shortestPath() {
        int[] dist = new int[v];
        boolean[] visited = new boolean[v];
        for (int i = 0; i < v; i++)
            dist[i] = Integer.MAX_VALUE;
        Queue<Integer> q = new LinkedList<>();
        q.add(0);
        dist[0] = 0;
        visited[0] = true;
        while (!q.isEmpty()) {
            int curr = q.poll();
            for (int nei : adj.get(curr)) {
                if (visited[nei] == false) {
                    visited[nei] = true;
                    dist[nei] = dist[curr] + 1;
                    q.add(nei);
                }
            }
        }
        System.out.print(Arrays.toString(dist));
    }

    public static void main(String args[]) {
        for (int i = 0; i < v; i++) {
            adj.add(new ArrayList<Integer>());
        }
        addEdge(adj, 0, 1);
        addEdge(adj, 0, 3);
        addEdge(adj, 1, 2);
        addEdge(adj, 3, 4);
        addEdge(adj, 3, 7);
        addEdge(adj, 4, 5);
        addEdge(adj, 4, 6);
        addEdge(adj, 4, 7);
        addEdge(adj, 5, 6);
        addEdge(adj, 6, 7);
        shortestPath();
    }
}
