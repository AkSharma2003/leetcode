class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());
        vector<int> freq(mx + 1, 0);

        for (int x : nums){
            freq[x]++;
        }

        vector<long long> cnt(mx + 1, 0);
        for (int g = 1; g <= mx; g++) {
            long long c = 0;

            for (int j = g; j <= mx; j += g)
                c += freq[j];

            cnt[g] = c * (c - 1) / 2;
        }

        // Inclusion-Exclusion
        for (int g = mx; g >= 1; g--) {
            for (int j = 2 * g; j <= mx; j += g)
                cnt[g] -= cnt[j];
        }

        // Prefix count
        vector<long long> prefix(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + cnt[i];

        vector<int> ans;

        for (long long q : queries) {

            int g = lower_bound(prefix.begin() + 1,
                                prefix.end(),
                                q + 1) - prefix.begin();

            ans.push_back(g);
        }

        return ans;
    }
};