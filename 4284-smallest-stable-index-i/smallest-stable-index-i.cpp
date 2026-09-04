class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<2){
            return k<=0?k:0;
        }
        for(int i=0;i<n;i++){
            int max=*max_element(nums.begin(),nums.begin()+i);
            int min=*min_element(nums.begin()+i,nums.end());
            if(max-min<=k){
                return i;
            }
        }
        return -1;
    }
};