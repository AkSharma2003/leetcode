class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());

        int mxpos,mnpos;

        int len=nums.size();
        if(len==1) return 1;

        for(int i=0;i<len;i++){
            if(nums[i]==mx) mxpos=i+1;
        }

        for(int i=0;i<len;i++){
            if(nums[i]==mn) mnpos=i+1;
        }

        int ans1=max(mxpos,mnpos);
        int ans2=min(mxpos,mnpos);

        int ans=ans2+len-ans1+1;
        ans=min(ans1,ans);

        return min(ans,len-ans2+1);
    }
};