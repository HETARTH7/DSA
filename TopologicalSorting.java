import java.util.ArrayList;
import java.util.Queue;
import java.util.Vector;
import java.util.LinkedList;
import java.util.List;

class TopologicalSorting {
    static int V = 6;
    static List<Integer> adj[] = new ArrayList[V];;

    public static void addEdge(int u, int v) {
        adj[u].add(v);
    }

    public static void topologicalSort() {
        int[] indegree = new int[V];
        for (int i = 0; i < V; i++) {
            for (int nei : adj[i]) {
                indegree[nei]++;
            }
        }
        Queue<Integer> q = new LinkedList<Integer>();
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0)
                q.add(i);
        }
        Vector<Integer> v = new Vector<>();
        while (!q.isEmpty()) {
            int curr = q.poll();
            v.add(curr);
            for (int nei : adj[curr]) {
                indegree[nei]--;
                if (indegree[nei] == 0)
                    q.add(nei);
            }
        }
        System.out.print(v);
    }

    public static void main(String args[]) {
        for (int i = 0; i < V; i++)
            adj[i] = new ArrayList<Integer>();
        addEdge(5, 2);
        addEdge(5, 0);
        addEdge(4, 0);
        addEdge(4, 1);
        addEdge(2, 3);
        addEdge(3, 1);
        System.out.println("Following is a Topological Sort");
        topologicalSort();
    }
}