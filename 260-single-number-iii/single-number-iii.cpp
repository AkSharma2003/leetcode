class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans(2,0);
        int n=0;
        for(int i:nums){
            n=n^i;
        }
        unsigned int x = static_cast<unsigned int>(n);
        unsigned int msk = x & -x;
        for(int i:nums){
            if(static_cast<unsigned int>(i) & msk) ans[0]^=i;
            else ans[1]^=i;
        }
        return ans;
    }
};