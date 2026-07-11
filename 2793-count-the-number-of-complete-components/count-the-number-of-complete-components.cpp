class Solution {
public:
    vector<vector<int>> adj;
    vector<int> vis;

    void dfs(int u, int &nodes, int &edges) {
        vis[u] = 1;
        nodes++;
        edges += adj[u].size();

        for (int v : adj[u]) {
            if (!vis[v])
                dfs(v, nodes, edges);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        adj.resize(n);
        vis.assign(n, 0);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {

                int nodes = 0;
                int edgeCnt = 0;

                dfs(i, nodes, edgeCnt);

                edgeCnt /= 2;

                if (edgeCnt == nodes * (nodes - 1) / 2)
                    ans++;
            }
        }

        return ans;
    }
};