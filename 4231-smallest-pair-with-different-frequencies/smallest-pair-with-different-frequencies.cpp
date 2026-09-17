class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i:nums){
            mp[i]++;
        }

        int x=*min_element(nums.begin(),nums.end());

        int y=INT_MAX;
        for (auto [val, freq] : mp) {
            if (val > x && freq != mp[x]) {
                y = min(y, val);
            }
        }

        if (y == INT_MAX)
            return {-1, -1};
        return {x, y};
    }
};