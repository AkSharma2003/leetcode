class Solution {
public:
    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int sm=0;
        for(int i:nums){
            if(i%2==0) sm+=i;
        }

        for(int i=0;i<queries.size();i++){
            int pos=queries[i][1];
            int data=queries[i][0];

            int num=nums[pos]+data;
            if(nums[pos]%2){
                if(num%2==0) sm+=num;
                ans.push_back(sm);
            }
            else{
                if(num%2) sm-=nums[pos];
                else sm+=data;
                ans.push_back(sm);
            }
            nums[pos]=num;
        }
        return ans;
    }
};