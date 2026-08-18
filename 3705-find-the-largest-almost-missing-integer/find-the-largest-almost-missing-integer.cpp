class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k) return -1;
        if(k==n) return *max_element(nums.begin(), nums.end());
        unordered_map<int,int> mp;

        for(int i:nums){
            mp[i]++;
        }
        if(k==1){
            int ans = -1;
            for(auto &p : mp) {
                if(p.second == 1) ans = max(ans, p.first);
            }
            return ans;
        }
        int ans1=nums[0];
        int ans2=nums[n-1];

        if(mp[ans1]== 1 && mp[ans2]==1) return max(ans1,ans2);
        if(mp[ans1]==1) return ans1;
        if(mp[ans2]==1) return ans2;

        return -1;
    }
};