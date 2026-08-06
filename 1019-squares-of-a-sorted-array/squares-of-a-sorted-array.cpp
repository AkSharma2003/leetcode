class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums){
            mp[i*i]++;
        }

        vector<int> ans;
        for(auto & at:mp){
            for(int i=0;i<at.second;i++){
                ans.push_back(at.first);
            }
        }

        return ans;
    }
};