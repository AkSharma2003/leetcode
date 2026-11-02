class Solution {
public:
    int minMoves2(vector<int>& nums) {
        nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());

        int num = nums[nums.size() / 2];
        int ans = 0;
        for (int i : nums) {
            int n = abs(i - num);
            ans += n;
        }

        return ans;
    }
};