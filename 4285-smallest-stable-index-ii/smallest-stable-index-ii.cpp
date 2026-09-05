class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2){
            return k<=0?k:0;
        }
        vector<int> mx;

        int num=nums[0];
        for(int i=0;i<n;i++){
            num=nums[i]>num?nums[i]:num;
            mx.push_back(num);
        }

        vector<int>mn;
        num=nums[n-1];
        for(int i=n-1;i>=0;i--){
            num=nums[i]<num?nums[i]:num;
            mn.push_back(num);
        }

        reverse(mn.begin(),mn.end());
        for(int i=0;i<n;i++){
            if(mx[i]-mn[i]<=k) return i;
        }
        
        return -1;
    }
};