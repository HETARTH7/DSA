import java.util.ArrayList;
import java.util.LinkedList;

public class Graph {
    public static void addEdge(ArrayList<ArrayList<Integer>> adj, int u, int v) {
        adj.get(u).add(v);
        adj.get(v).add(u);
    }

    public static void printGraph(ArrayList<ArrayList<Integer>> adj) {
        for (int i = 0; i < adj.size(); i++) {
            System.out.println(i + "->" + adj.get(i));
        }
    }

    public static void dfs(ArrayList<ArrayList<Integer>> adj, int V) {
        boolean visited[] = new boolean[V + 1];
        dfsRec(adj, 1, visited);
    }

    public static void dfsRec(ArrayList<ArrayList<Integer>> adj, int i, boolean[] visited) {
        if (visited[i] == true)
            return;
        System.out.print(i + " ");
        visited[i] = true;
        for (int nei : adj.get(i)) {
            if (visited[nei] == false)
                dfsRec(adj, nei, visited);
        }
    }

    public static void bfs(ArrayList<ArrayList<Integer>> adj, int V) {
        boolean visited[] = new boolean[V + 1];
        for (int i = 1; i <= V; i++)
            visited[i] = false;
        LinkedList<Integer> q = new LinkedList<Integer>();
        q.add(1);
        while (!q.isEmpty()) {
            int curr = q.poll();
            if (visited[curr] == true)
                continue;
            visited[curr] = true;
            System.out.print(curr + " ");
            for (int i : adj.get(curr)) {
                if (visited[i] == false)
                    q.add(i);
            }
        }
    }

    public static void main(String[] args) {
        int V = 6;
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(V + 1);

        for (int i = 0; i < V + 1; i++)
            adj.add(new ArrayList<Integer>());

        addEdge(adj, 1, 2);
        addEdge(adj, 1, 3);
        addEdge(adj, 2, 4);
        addEdge(adj, 2, 5);
        addEdge(adj, 3, 5);
        addEdge(adj, 4, 5);
        addEdge(adj, 4, 6);
        addEdge(adj, 5, 6);
        System.out.print("DFS: ");
        dfs(adj, V);
        System.out.print("\nBFS: ");
        bfs(adj, V);
    }
}
