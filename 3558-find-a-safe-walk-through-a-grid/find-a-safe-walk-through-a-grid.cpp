class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        dist[0][0] = grid[0][0];
        pq.push({dist[0][0], 0, 0});

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        while (!pq.empty()) {
            auto cur = pq.top();
            pq.pop();

            int cost = cur[0];
            int x = cur[1];
            int y = cur[2];

            if (cost > dist[x][y]) continue;

            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                    continue;

                int newCost = cost + grid[nx][ny];

                if (newCost < dist[nx][ny]) {
                    dist[nx][ny] = newCost;
                    pq.push({newCost, nx, ny});
                }
            }
        }

        return dist[m - 1][n - 1] < health;
    }
};