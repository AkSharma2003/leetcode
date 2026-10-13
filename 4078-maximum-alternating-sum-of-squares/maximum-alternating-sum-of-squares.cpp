class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            v[i] = 1LL * nums[i] * nums[i];

        sort(v.begin(), v.end());

        long long ans = 0;
        int k = n / 2;   

        for (int i = 0; i < k; i++)
            ans -= v[i];

        for (int i = k; i < n; i++)
            ans += v[i];

        return ans;
    }
};
