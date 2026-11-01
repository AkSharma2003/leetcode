class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = INT_MAX;
        int ans = 0;

        for(int i : nums){
            mn = min(mn, i);
        }

        for(int i : nums){
            ans += (i - mn);
        }

        return ans;
    }
};