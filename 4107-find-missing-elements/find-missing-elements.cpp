class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=nums[0];
        int mn=nums[0];

        for(int i:nums){
            mx=max(mx,i);
            mn=min(mn,i);
        }
        
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> ans;

        for(int i=mn;i<mx;i++){
            if(mp[i]==0) ans.push_back(i);
        }
        return ans;
    }
};