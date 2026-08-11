class Solution {
public:
    int missingInteger(vector<int>& nums) {
        vector<int> sum(2,0);
        int ct=0;

        unordered_set<int> s;

        for(int i:nums){
            s.insert(i);
        }

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i<1){
                sum[0]=1;
                sum[1]=nums[i];
            }
            else if(nums[i]==nums[i-1]+1){
                sum[0]++;
                sum[1]+=nums[i];
            }
            else{
                break;
            }
        }
        int ans=sum[1];
        while(ans){
            if(s.find(ans) != s.end())ans++;
            else break;
        }

        return ans;
    }
};