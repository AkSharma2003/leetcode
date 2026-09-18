class Solution {
public:
    int ans(int a, int b, int m, int n, vector<vector<int>>& dp) {
        if (a >=m || b >=n)
            return 0;
        else if (dp[a][b] != -1)
            return dp[a][b];
        if (a == m-1 && b == n-1)
            return 1;

        dp[a][b] = ans(a + 1, b, m, n, dp) + ans(a, b + 1, m, n, dp);

        return dp[a][b];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return ans(0, 0, m, n, dp);
    }
};