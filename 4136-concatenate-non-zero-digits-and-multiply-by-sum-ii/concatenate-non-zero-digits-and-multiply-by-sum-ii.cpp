class Solution {
public:
    static constexpr int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();

        vector<long long> prefSum(n + 1, 0);
        vector<int> prefCnt(n + 1, 0);
        vector<long long> prefHash(n + 1, 0);
        vector<long long> pw(n + 1, 1);

        for (int i = 1; i <= n; i++)
            pw[i] = (pw[i - 1] * 10) % MOD;

        for (int i = 0; i < n; i++) {
            prefSum[i + 1] = prefSum[i];
            prefCnt[i + 1] = prefCnt[i];
            prefHash[i + 1] = prefHash[i];

            if (s[i] != '0') {
                int d = s[i] - '0';
                prefSum[i + 1] += d;
                prefCnt[i + 1]++;

                prefHash[i + 1] =
                    (prefHash[i] * 10 + d) % MOD;
            }
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            long long sum = prefSum[r + 1] - prefSum[l];

            int cnt = prefCnt[r + 1] - prefCnt[l];

            long long left =
                prefHash[l] * pw[cnt] % MOD;

            long long num =
                (prefHash[r + 1] - left + MOD) % MOD;

            ans.push_back(num * sum % MOD);
        }

        return ans;
    }
};