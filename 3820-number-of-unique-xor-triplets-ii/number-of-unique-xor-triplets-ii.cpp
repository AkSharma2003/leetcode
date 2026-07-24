class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        int n=nums.size();
        unordered_set<int> st;
        unordered_set<int> ans;
        for(int i:nums){
            ans.insert(i);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                st.insert(nums[i]^nums[j]);
            }
        }

        for(int i:st){
            for(int j=0;j<n;j++){
                ans.insert(nums[j]^i);
            }
        }

       

        return ans.size();
    }
};