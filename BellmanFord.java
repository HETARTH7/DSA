public class BellmanFord {
    public static int[] bellmanFord(int V, int[][] edges, int src) {
        int[] dist = new int[V];
        for (int i = 0; i < V; i++)
            dist[i] = Integer.MAX_VALUE;
        dist[src] = 0;
        for (int i = 0; i < V - 1; i++) {
            for (int[] edge : edges) {
                if (dist[edge[0]] != Integer.MAX_VALUE)
                    dist[edge[1]] = Math.min(dist[edge[1]], dist[edge[0]] + edge[2]);
            }
        }
        return dist;
    }

    public static void main(String[] args) {
        int V = 5;
        int[][] edges = new int[][] {
                { 1, 3, 2 },
                { 4, 3, -1 },
                { 2, 4, 1 },
                { 1, 2, 1 },
                { 0, 1, 5 }
        };
        int src = 0;
        int[] ans = bellmanFord(V, edges, src);
        for (int dist : ans)
            System.out.print(dist + " ");
    }
}
