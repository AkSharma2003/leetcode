class Solution {
public:
    int sm(vector<int>& nums){
        int ans=0;
        for(int i:nums){
            if(i%2==0) ans+=i;
        }
        return ans;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            nums[queries[i][1]]+=queries[i][0];
            ans.push_back(sm(nums));
        }
        return ans;
    }
};