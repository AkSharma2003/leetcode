class Solution {
public:
    int sm(int num){
        int ans=0;
        while(num){
            int a=num%10;
            ans+=a;
            num/=10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==sm(nums[i])) return i;
        }

        return -1;
    }
};