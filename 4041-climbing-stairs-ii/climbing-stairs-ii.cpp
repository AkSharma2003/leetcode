class Solution {
public:
    int sm(int i, int j, int prev, vector<int>& costs) {
        return prev + costs[j - 1] + (j - i) * (j - i);
    }

    int climbStairs(int n, vector<int>& costs) {
        vector<int> ans(n + 1, INT_MAX);
        ans[0] = 0;

        for (int i = 0; i < n; i++) {
            if (ans[i] == INT_MAX) continue;

            for (int j = i + 1; j <= min(n, i + 3); j++) {
                ans[j] = min(ans[j], sm(i, j, ans[i], costs));
            }
        }

        return ans[n];
    }
};