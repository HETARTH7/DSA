import collections


class Graph:
    def __init__(self, size):
        self.V = size
        self.mat = [[0 for _ in range(size)] for _ in range(size)]
        self.list = []*size

    def add_edge(self, v1, v2):
        self.mat[v1][v2] = 1
        self.adj[v1].append(v2)

    def remove_edge(self, v1, v2):
        self.adj[v1][v2] = 0

    # Time Complexity: O(V) (V->num of nodes)
    def dfs(self):
        visited = set()

        def dfsTraverse(node):
            if node in visited:
                return None
            print(node)
            visited.add(node)
            for nei in self.list[node]:
                dfsTraverse(nei)

        for node in range(self.V):
            dfsTraverse(node)

    # Time Complexity: O(V) (V->num of nodes)
    def bfs(self, start):
        visited, q = set(), collections.deque()
        q.insert(start)

        while q:
            node = q.popleft()
            if node in visited:
                continue
            visited.add(node)
            print(node)
            for nei in self.list[node]:
                q.insert(nei)


graph = Graph(3)
