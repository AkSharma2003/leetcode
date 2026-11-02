class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=nums[nums.size()/2];
        int ans=0;
        for(int i:nums){
            int n=abs(i-num);
            ans+=n;
        }

        return ans;
    }
};