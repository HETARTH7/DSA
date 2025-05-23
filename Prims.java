import java.util.Arrays;

public class Prims {
    private static final int V = 5;

    public static void prims(int[][] graph) {
        int[] key = new int[V];
        boolean[] mst = new boolean[V];
        for (int i = 0; i < V; i++) {
            key[i] = Integer.MAX_VALUE;
            mst[i] = false;
        }
        key[0] = 0;
        for (int i = 0; i < V; i++) {
            int u = -1;
            for (int j = 0; j < V; j++) {
                if (!mst[j] && (u == -1 || key[j] < key[u]))
                    u = j;
            }
            mst[u] = true;
            for (int j = 0; j < V; j++) {
                if (graph[u][j] != 0)
                    key[j] = Math.min(key[j], key[u] + graph[u][j]);
            }
        }
        System.out.println("Distance to every node in MST: " + Arrays.toString(key));
    }

    public static void main(String[] args) {
        int graph[][] = new int[][] { { 0, 2, 0, 6, 0 },
                { 2, 0, 3, 8, 5 },
                { 0, 3, 0, 0, 7 },
                { 6, 8, 0, 0, 9 },
                { 0, 5, 7, 9, 0 } };
        prims(graph);
    }
}
