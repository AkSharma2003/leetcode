class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int first=0;
        int second=0;

        for(int i=0;i<nums.size();i++){
            int n=abs(nums[i]);
            first=max(first,n);
        }

        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])==first) {
                nums[i]=0;
                break;
            }
        }

        for(int i=0;i<nums.size();i++){
            int n=abs(nums[i]);
            second=max(second,n);
        }

        return 1LL*first*second*100000;
    }
};